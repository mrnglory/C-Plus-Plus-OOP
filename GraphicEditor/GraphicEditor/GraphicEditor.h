#pragma once
#include "Shape.h"
#include "Line.h"
#include "Circle.h"
#include "Rect.h"
#include "UI.h"

class GraphicEditor
{
	Shape* pStart;
	Shape* pLast;
	int count;
public:
	GraphicEditor() { pStart = NULL; count = 0; }
	void create(int num);
	void deleting(int num);
	void ui();
};