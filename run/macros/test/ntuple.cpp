#include "include/EventHandler.h"
#include "TROOT.h"
#include "TFile.h"
#include "TTree.h"
#include "TBrowser.h"
#include "TH2.h"
#include "TRandom.h"
#include "Riostream.h"
#include <iostream>

void ntuple(){
    
    gStyle->SetOptFit(111);
    
    // reading ntuples
    TFile* fin = new TFile("/home/ilc/yokugawa/work/MonoPhoton/run/MP.root");
    TTree* data = static_cast<TTree*>(fin->Get("evtdata"));
    
    // variables
    const int nmax = 1000;
    int ngammas = 0;
    float pfo_gamma_e[nmax];
    float mcr_gamma_e[nmax];
    bool mcr_gamma_iscreatedinsim[nmax];    
    int nEvent = data->GetEntries();
    cout << "Generating " << nEvent << "Events" << endl;
    
    float Ecm = 250.;
    float e_cut = 26.;
    float p_cut = 26.;
    
    
    // set branch address
    data->SetBranchAddress("ngammas",&ngammas);    // number of particles in a single event
    data->SetBranchAddress("pfo_gamma_e",pfo_gamma_e);
	data->SetBranchAddress("mcr_gamma_e",mcr_gamma_e);
	data->SetBranchAddress("mcr_gamma_iscreatedinsim",mcr_gamma_iscreatedinsim);
    
    // histograms
    TH1D* hall = new TH1D("hall","",300,0,3);
	TH1D* hgen = new TH1D("hgen","",300,0,3);
	TH1D* hsim = new TH1D("hsim","",300,0,3);
	TCanvas* c = new TCanvas("c","",600,400);
    
    // ntuple loop
    for(int iEvent=0; iEvent<nEvent; iEvent++){
        
        data->GetEntry(iEvent);
        
        // single event loop
        for(int i=0; i<ngammas; i++){
            
            EventHandler evth(pfo_gamma_e[i], mcr_gamma_e[i]);
            
        }// end single event loop
        
        
    }// end ntuple loop

    
}

