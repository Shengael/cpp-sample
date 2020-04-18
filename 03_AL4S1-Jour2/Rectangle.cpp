#include "pch.h"
#include "Rectangle.h"

Rectangle::Rectangle()
{
	cout << "Rectangle ctor" << endl;
}

Rectangle::Rectangle(Rect rect) 
	: Shape(rect)
{
	cout << "Rectangle rect ctor" << endl;
}

Rectangle::~Rectangle()
{
	cout << "Rectangle dtor" << endl;
}

void Rectangle::Draw(DrawingContext& dc)
{
	dc.DrawRectangle(_rect);
}

