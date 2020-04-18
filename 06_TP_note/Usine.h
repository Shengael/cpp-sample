#pragma once
#include "Pneu.h"

class Usine
{
public:
	static shared_ptr<Pneu> CreateObject(TypePneu type);

};

