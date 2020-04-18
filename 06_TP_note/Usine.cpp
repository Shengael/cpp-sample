#include "pch.h"
#include "Usine.h"

shared_ptr<Pneu> Usine::CreateObject(TypePneu type)
{
	shared_ptr<Pneu> pObj = nullptr;
	switch (type)
	{
	case TypePneu::camion:
		pObj = make_shared<PneuCamion>();
		break;
	case TypePneu::voiture:
		pObj = make_shared<PneuVoiture>();
		break;
	}
	return pObj;
}