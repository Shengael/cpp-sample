#include "pch.h"
#include "Camion.h"

void Camion::Monter(const vector<shared_ptr<Pneu>>& vPneu)
{
	// 8
	_pneus = vPneu;
}

void Camion::Info()
{
	cout << "Camion pneus:" << _pneus.size() << endl;
}