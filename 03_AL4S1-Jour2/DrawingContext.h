#pragma once
#include "Rect.h"

class DrawingContext
{
public:
	DrawingContext();
	~DrawingContext();

public:
	void DrawRectangle(Rect rect);
	void DrawEllipse(Rect rect);
	void DrawImage(Rect rect, string filename);
};

