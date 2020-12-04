#ifndef EventHandler_h
#define EventHandler_h

#include "TROOT.h"
#include "TObject.h"
#include "TFile.h"
#include "TTree.h"
#include "TH2.h"
#include "Riostream.h"
#include <iostream>

class EventHandler: public TObject {

protected:
	float pfoE_;
	float mcrE_;

public:
    EventHandler(float pfoE, float mcrE);
	virtual ~EventHandler();
	
	//module
	float pfoE() const  { return pfoE_; }
	float mcrE()  const { return mcrE_; }

	bool  IsE0();
	float div();
	
	ClassDef(EventHandler,1);
};

#endif
