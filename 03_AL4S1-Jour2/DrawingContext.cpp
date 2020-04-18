#include "pch.h"
#include "DrawingContext.h"

DrawingContext::DrawingContext()
{
}

DrawingContext::~DrawingContext()
{
}

void DrawingContext::DrawRectangle(
	Rect rect)
{
	cout << "**** Rectangle ***** " 
		<< rect._x1 << ", " 
		<< rect._y1 << endl;
}

void DrawingContext::DrawEllipse(
	Rect rect)
{
	cout << "**** Ellipse ***** "
		<< rect._x1 << ", "
		<< rect._y1 << endl;
}

void DrawingContext::DrawImage(
	Rect rect, string filename)
{
	cout << "**** Image ***** "
		<< rect._x1 << ", "
		<< rect._y1 << endl;
}
