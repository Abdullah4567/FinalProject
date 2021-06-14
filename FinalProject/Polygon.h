#pragma once
#include"AllShapes.h"
class Polygon :public AllShapes
{
public:
	Polygon()
	{

	}
	Polygon(int id, Vector2f* P, int Points, Color C = Color::White) :AllShapes(id, P, Points, C)
	{


	}
	void Draw()
	{

	}
	void Contains(Vector2f V)
	{

	}
	void FillColour(Color C)
	{

	}
	  ~Polygon()
	{

	}
};
