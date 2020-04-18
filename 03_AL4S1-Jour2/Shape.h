#pragma once
#include "Rect.h"
#include "DrawingContext.h"

enum ShapeType
{
	none,
	rectangle,
	ellipse,
	triangle,
	image,
	text
};

class Shape
{
public:
	Shape();
	Shape(Rect rect);
	//Shape(ShapeType type);
	virtual ~Shape();

public:
	virtual void Draw(
		DrawingContext& dc) = 0;
	void DisplayInfo();

public:
	string _name;
	int _id;
	Rect _rect;
	ShapeType _type;
};

