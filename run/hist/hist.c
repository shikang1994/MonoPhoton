#include "TROOT.h"
#include "TFile.h"
#include "TTree.h"
#include "TBrowser.h"
#include "TH2.h"
#include "TRandom.h"
#include "Riostream.h"
#include <iostream>

float pcalc(float px, float py, float pz);
float invm(float e1, float e2, float px1, float py1, float pz1, float px2, float py2, float pz2);



void hist(){
    
    gStyle->SetOptFit(111);
    
    // reading ntuples
    TFile* fin = new TFile("lctuple_mumuH.root");
    TTree* T = static_cast<TTree*>(fin->Get("MyLCTuple"));
    
    // variables
    const int nmax = 1000;
    int nParticles = 0;
    int pid[nmax];
    float px[nmax];
    float py[nmax];
    float pz[nmax];
    float e[nmax];
    int nEvent = T->GetEntries();
    cout << "Generating " << nEvent << "Events" << endl;
    
    float Ecm = 250.;
    float e_cut = 26.;
    float p_cut = 26.;
    
    
    // set branch address
    T->SetBranchAddress("nrec",&nParticles);    // number of particles in a single event
    T->SetBranchAddress("rctyp",pid);           // particle id
    T->SetBranchAddress("rcmox",px);
    T->SetBranchAddress("rcmoy",py);
    T->SetBranchAddress("rcmoz",pz);
    T->SetBranchAddress("rcene",e);
    
    // histograms
    TH1F *mu_p_nocut_hist = new TH1F("mupnocuthist","Momentum of #mu^{-} (before cut)",100,0,100.);
    TH1F *mubar_p_nocut_hist = new TH1F("mubarpnocuthist","Momentum of #mu^{+} (before cut)",100,0,100.);
    TH1F *mu_e_nocut_hist = new TH1F("muenocuthist","Energy of #mu^{-} (before cut)",100,0,100.);
    TH1F *mubar_e_nocut_hist = new TH1F("mubarenocuthist","Energy of #mu^{+} (before cut)",100,0,100.);
    TH1F *invZ_max_hist = new TH1F("invmax_hist","Invariant mass of #mu^{-} and #mu^{+}",100,0,200.);
    TH1F *invZ_close_hist = new TH1F("invclose_hist","Invariant mass of #mu^{-} and #mu^{+}",100,0,200.);
    TH1F *invH_hist = new TH1F("invH_hist","Recoiled H mass (with close method)",100,0,200.);

    TH1F *mu_abv_cut_hist = new TH1F("muabvcut","Number of muons above E cut/Event (after cut)",10,0,10.);
    
    
    // ntuple loop
    for(int iEvent=0; iEvent<nEvent; iEvent++){
        
        T->GetEntry(iEvent);
        
        int mu_abv_cut = 0;
        vector<float> mu_eVec, mubar_eVec;
        vector<float> mu_pxVec, mubar_pxVec;
        vector<float> mu_pyVec, mubar_pyVec;
        vector<float> mu_pzVec, mubar_pzVec;
        
        // single event loop
        for(int i=0; i<nParticles; i++){
            
            float mup = 0;
            bool isMu = false;
            bool isMubar = false;
            bool iseCut = false;
            bool ispCut = false;
            
            if(pid[i]==13) isMu = true;        // mu id
            if(pid[i]==-13) isMubar = true;    // mubar id
            
            if(isMu==true || isMubar==true) mup = pcalc(px[i], py[i], pz[i]);  // calc. mu momentum
            
            if(e[i]>e_cut) iseCut = true;    // e cuts check
            if(mup>p_cut) ispCut = true;    //  p cuts check
            
            if(iseCut==true && ispCut==true){
                
                if(isMu==true||isMubar==true) mu_abv_cut++;
                
                if(isMu==true){ // mu-
                    
                    mu_pxVec.push_back(px[i]);
                    mu_pyVec.push_back(py[i]);
                    mu_pzVec.push_back(pz[i]);
                    mu_eVec.push_back(e[i]);
                    
                } // end mu p
                else if(isMubar==true){ // mu+
                    
                    mubar_pxVec.push_back(px[i]);
                    mubar_pyVec.push_back(py[i]);
                    mubar_pzVec.push_back(pz[i]);
                    mubar_eVec.push_back(e[i]);
                    
                } // end mubar p
                
            } // end abv cut
            
            if(isMu==true){
                mu_p_nocut_hist->Fill(mup);
                mu_e_nocut_hist->Fill(e[i]);
            }
            else if(isMubar==true){
                mubar_p_nocut_hist->Fill(mup);
                mubar_e_nocut_hist->Fill(e[i]);
            }
            
            
        }// end single event loop
        
        
        // at least one  mu- and mu+ each
        if(mu_pxVec.size()>0 && mubar_pxVec.size()>0){
            
            /////////////////////////////////////////////
            // find mu+/mu- pair with largest momentum //
            /////////////////////////////////////////////
            
            int big_muj=0, big_mubark=0;
            float big_mup=0., big_mubarp=0.;
            float invZ_max=0;
            float mumom=0, mubarmom=0;
            
            // selecting max mu-
            for(int j=0; j<mu_pxVec.size();j++){
                
                mumom = pcalc(mu_pxVec[j], mu_pyVec[j], mu_pzVec[j]);
                if(mumom>big_mup){
                    
                    big_muj=j;
                    big_mup=mumom;
                    
                }
                
            } // end selecting max mu-
            
            // selecting max mu+
            for(int k=0; k<mubar_pxVec.size();k++){
                
                mubarmom= pcalc(mubar_pxVec[k], mubar_pyVec[k], mubar_pzVec[k]);
                if(mubarmom>big_mubarp){
                    
                    big_mubark=k;
                    big_mubarp=mubarmom;
                    
                }
                
            } // end selecting max mu+
            
            invZ_max = invm(mu_eVec[big_muj], mubar_eVec[big_mubark], mu_pxVec[big_muj], mu_pyVec[big_muj], mu_pzVec[big_muj], mubar_pxVec[big_mubark], mubar_pyVec[big_mubark], mubar_pzVec[big_mubark]);
            invZ_max_hist->Fill(invZ_max);
        
            
            ////////////////////////////////////////////////////////////
            // find mu+/mu- pair with the closest invariant mass to Z //
            ////////////////////////////////////////////////////////////
            
            float corrZ = 0;
            float mZ = 91.;
            float eZ = 0;
            float dm = 0;
            float mindm = 1000.;
            float invZ_close=0;
            float invH = 0;
            float corrH = 0;
            
            // double loop
            for(int l=0; l<mu_pxVec.size();l++){
                for(int m=0; m<mubar_pxVec.size();m++){
                    
                    float mu_e=0, mubar_e=0;
                    float mu_px=0, mu_py=0, mu_pz=0;
                    float mubar_px=0, mubar_py=0, mubar_pz=0;
                    
                    mu_e = mu_eVec[l];
                    mu_px = mu_pxVec[l];
                    mu_py = mu_pyVec[l];
                    mu_pz = mu_pzVec[l];
                    mubar_e = mubar_eVec[m];
                    mubar_px = mubar_pxVec[m];
                    mubar_py = mubar_pyVec[m];
                    mubar_pz = mubar_pzVec[m];
                    
                    eZ = mu_e + mubar_e;
                    
                    invZ_close = invm(mu_e, mubar_e, mu_px, mu_py, mu_pz, mubar_px, mubar_py, mubar_pz);
                    invH = invm(Ecm, -eZ, mu_px, mu_py, mu_pz, mubar_px, mubar_py, mubar_pz);
                    
                    dm = abs(mZ - invZ_close);
                    
                    // minimization
                    if(dm < mindm){
                        mindm = dm;
                        corrZ = invZ_close;
                        corrH = invH;
                    } // end minimization
                }
            } // end double loop
            
            invZ_close_hist->Fill(corrZ);
            invH_hist->Fill(corrH);
            
        }// end if statement
        
        mu_abv_cut_hist->Fill(mu_abv_cut);
        
    }// end ntuple loop

    //invZ_max_hist->Fit("gaus");
    invZ_close_hist->Fit("gaus");
    invH_hist->Fit("gaus");
    
}

float pcalc(float px, float py, float pz){
    
    float p;
    
    p = sqrt(px*px + py*py + pz*pz);
    
    return p;
}

float invm(float e1, float e2, float px1, float py1, float pz1, float px2, float py2, float pz2){
    
    float M=0;
    float tpx=0, tpy=0, tpz=0;
    float te=0;
    
    tpx = px1+px2;
    tpy = py1+py2;
    tpz = pz1+pz2;
    te  = e1+e2;
    
    //M = sqrt( te*te - (tpx + tpy + tpz)*(tpx + tpy + tpz) );
    M = sqrt( te*te - ( tpx*tpx + tpy*tpy + tpz*tpz ) );
    
    return M;
    
}

