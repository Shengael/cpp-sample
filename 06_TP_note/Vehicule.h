#pragma once
#include "Pneu.h"

class Vehicule
{
public:
	virtual ~Vehicule() {}

public:
	virtual void Monter(const vector<shared_ptr<Pneu>>& vPneu) = 0;
	virtual void Info() = 0;

protected:
	vector<shared_ptr<Pneu>> _pneus;
};

