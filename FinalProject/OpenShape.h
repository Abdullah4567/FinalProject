#pragma once
#include"AllShapes.h"
class  OpenShapes :public AllShapes
{
protected:
	bool Style; // 1 for Solid line  0 for Dotted Line
public:
	OpenShapes()
	{

	}
	OpenShapes(int id, Vector2f* P, int Points, Color C, bool style) :AllShapes(id, P, Points, C)
	{
		this->Style = style;
	}
	virtual void ChangeColour() = 0;
	virtual	~OpenShapes()
	{

	}
};