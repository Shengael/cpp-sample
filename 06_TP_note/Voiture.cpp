#include "pch.h"
#include "Voiture.h"

void Voiture::Monter(const vector<shared_ptr<Pneu>>& vPneu)
{
	//_pneus = vPneu;
	// 4

	for (shared_ptr<Pneu> pneu : vPneu)
	{
		_ASSERT(pneu->_type == TypePneu::voiture);

		if (pneu->_type == TypePneu::voiture)
		{
			_pneus.push_back(pneu);
		}
		//else
		//	throw new exception("WROnG ARG");
	}
}

void Voiture::Info()
{
	cout << "Voiture pneus:" << _pneus.size() << endl;
}