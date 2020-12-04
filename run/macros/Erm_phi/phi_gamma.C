
int   ngammas;
const int NMAXGMMA = 500;
float pfo_gamma_e[NMAXGMMA], mcr_gamma_e[NMAXGMMA];
float pfo_gamma_phi[NMAXGMMA], mcr_gamma_phi[NMAXGMMA];
bool  mcr_gamma_iscreatedinsim[NMAXGMMA];

void DrawSlice(TTree* T = 0, TH1D* h1 = 0, TH1D* h2 = 0, TCanvas* c1=0, TCanvas* c2=0)
{
  h1->Reset();
  h2->Reset();
  int nevents = T->GetEntries();

  for (int ev = 0; ev < nevents; ev++) {
    
	int nphotons = 0;
    T->GetEntry(ev);
    for ( int ip = 0; ip < ngammas; ip++ ) {
      if(mcr_gamma_e[ip]!=0){

		if ( !mcr_gamma_iscreatedinsim[ip]){
			
			float erm = pfo_gamma_e[ip]/mcr_gamma_e[ip];

			h1->Fill(mcr_gamma_phi[ip]);
			if(erm < 0.7){
					h2->Fill(mcr_gamma_phi[ip]);
			} // end of if erm
	    } // end of if gen

	  } // end of if denominator != 0

    } // end of gamma loop



  } // end of event loop
  c1->cd();
  c1->SetLogy();
  h1->SetTitle(";E_{RC}/E_{MC} for gamma;");
  h1->GetYaxis()->SetRangeUser(10E-1,500);
  //h2->GetYaxis()->SetRangeUser(10E-1,500);
  h1->Draw();
  h2->SetLineColor(4);
  h2->Draw("same");

  TLegend *leg = new TLegend(0.15,0.85,0.53,0.7);
  leg->SetTextFont(132);
  leg->SetTextSize(0.03); 
  leg->SetTextAlign(12);
  leg->AddEntry(h1,"All photons","f"); 
  leg->AddEntry(h2,"Photons with E_{rm}/E_{mc}<0.7 created in generator","f"); 
  leg->Draw();
  stringstream fname;
  fname << "$HOME/work/MonoPhoton/run/hists/MP/Erm_phi/phi_gamma.pdf" << ends;
  c1->Print(fname.str().data());


  c2->cd();
  c2->SetLogy();
  TH1F *h3=(TH1F*)h2->Clone();
  int allPhotons = h1->GetEntries();

  TF1 *fa1 = new TF1("fa1","[0]",-10,10);
  fa1->SetParameter(0,allPhotons);
  h3->Divide(fa1,1);
  h3->Draw();
  h3->SetTitle("#phi for E_{RC}/E_{MC}<0.7");

}

void phi_gamma ()
{
  TFile* fin = new TFile("$HOME/work/MonoPhoton/run/MP.root");
  TTree* data = static_cast<TTree*>(fin->Get("evtdata"));

  TH1D* hall = new TH1D("hall","",300,-3,3);
  TH1D* hgen = new TH1D("hgen","",300,-3,3);
  //TH1D* hsim = new TH1D("hsim","",300,0,3);
  TCanvas* c1 = new TCanvas("c1","",600,400);
  TCanvas* c2 = new TCanvas("c2","",600,400);

  data->SetBranchAddress("ngammas",&ngammas);
  data->SetBranchAddress("pfo_gamma_e",pfo_gamma_e);
  data->SetBranchAddress("mcr_gamma_e",mcr_gamma_e);
  data->SetBranchAddress("pfo_gamma_phi",pfo_gamma_phi);
  data->SetBranchAddress("mcr_gamma_phi",mcr_gamma_phi);
  data->SetBranchAddress("mcr_gamma_iscreatedinsim",mcr_gamma_iscreatedinsim);

  DrawSlice(data,hall,hgen,c1,c2);

}
