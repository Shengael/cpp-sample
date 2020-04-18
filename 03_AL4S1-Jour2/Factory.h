#pragma once
#include "Shape.h"

class Factory
{
public:
	static shared_ptr<Shape> CreateShape(ShapeType type, Rect rect);
};

