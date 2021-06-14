#pragma once
#include"AllShapes.h"
class Circle :public AllShapes
{
	Vector2f Radius;
public:

	Circle()
	{

	}
	Circle(int id, Vector2f* P, int Points, Color C=Color::White):AllShapes(id,P,Points,C)
	{
		Radius = P[1]; // Second Point will be Radius
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
	~Circle()
	{

	}
};
