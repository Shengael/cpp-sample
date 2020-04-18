#pragma once
#include "Vehicule.h"
#include "Pneu.h"

class Camion : public Vehicule
{
public:
	virtual ~Camion() {}

public:
	virtual void Monter(const vector<shared_ptr<Pneu>>& vPneu);
	virtual void Info();
};

