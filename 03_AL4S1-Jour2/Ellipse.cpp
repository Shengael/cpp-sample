#include "pch.h"
#include "Ellipse.h"

Ellipse::Ellipse()
{
}

Ellipse::Ellipse(Rect rect)
	: Shape(rect)
{
}

Ellipse::~Ellipse()
{
}

void Ellipse::Draw(DrawingContext& dc)
{
	dc.DrawEllipse(_rect);
}

