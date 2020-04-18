#pragma once

enum TypePneu
{
	camion,
	voiture
};

class Pneu
{
public:
	virtual ~Pneu() {}

protected:
	int _size;
public:
	TypePneu _type;
};

class PneuVoiture : public Pneu
{
public:
	virtual ~PneuVoiture() {}

public:
	PneuVoiture()
	{
		_size = 1;
		_type = TypePneu::voiture;
	}
};

class PneuCamion : public Pneu
{
public:
	virtual ~PneuCamion() {}

public:
	PneuCamion()
	{
		_size = 5;
		_type = TypePneu::camion;
	}
};
