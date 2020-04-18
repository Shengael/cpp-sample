#pragma once
#include "Shape.h"


class Rectangle : public Shape
{
public:
	Rectangle();
	Rectangle(Rect rect);
	virtual ~Rectangle();

public:
	virtual void Draw(
		DrawingContext& dc);
};

