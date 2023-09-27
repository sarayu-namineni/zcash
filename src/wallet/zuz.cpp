#include "wallet/zuz.h"

ZUZ* zuz;

specID ZUZ::getNewSpecID(){
	specID currId = id;
	id++;
	return currId;
}

specID ZUZ::createSpec(ZUZSpecParams specParams){
	specID specId = getNewSpecID();
	ZUZSpec spec;
	spec.specId = specId;
	spec.userId = specParams.userId;
	spec.title = specParams.title;
	allSpecs.insert({specId, spec});
	return specId;
}