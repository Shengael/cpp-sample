#pragma once
#include "Vehicule.h"
#include "Pneu.h"

class Voiture : public Vehicule
{
public:
	virtual ~Voiture() {}

public:
	virtual void Monter(const vector<shared_ptr<Pneu>>& vPneu);
	virtual void Info();
};

