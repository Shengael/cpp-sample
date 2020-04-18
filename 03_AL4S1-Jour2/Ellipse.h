#pragma once
#include "Shape.h"

class Ellipse : public Shape
{
public:
	Ellipse();
	Ellipse(Rect rect);
	virtual ~Ellipse();

public:
	virtual void Draw(
		DrawingContext& dc);
};

