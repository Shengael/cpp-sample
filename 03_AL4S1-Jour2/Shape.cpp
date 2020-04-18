#include "pch.h"
#include "Shape.h"

Shape::Shape() : Shape(Rect(0, 0, 0, 0))
{
	cout << "Shape ctor" << endl;
}

Shape::Shape(Rect rect)
{
	cout << "Shape rect ctor" << endl;

	_id = 0;
	_name = "";

	_rect._x1 = rect._x1;
	_rect._y1 = rect._y1;
	_rect._x2 = rect._x2; 
	_rect._y2 = rect._y2;
}

Shape::~Shape()
{
	cout << "Shape dtor" << endl;
}

void Shape::DisplayInfo()
{
	cout << "Type:" << _type << ",";
	cout << "Name:" << _name << ",";
	cout << "Id:" << _id << endl;
}
