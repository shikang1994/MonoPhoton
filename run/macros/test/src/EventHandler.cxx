#include "../include/EventHandler.h"

ClassImp(EventHandler);

EventHandler::EventHandler(
				float pfoE,
				float mcrE
				):
		pfoE_(pfoE),
		mcrE_(mcrE){
		}

EventHandler::~EventHandler(){}

bool  EventHandler::IsE0(){
		if(mcrE_==0) return true;
		else return false;
}

float EventHandler::div(){
		return pfoE_/mcrE_;
}
