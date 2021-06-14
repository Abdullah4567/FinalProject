#pragma once
#include<SFML\Graphics.hpp>
#include<iostream>
using namespace std;
using namespace sf;
class AllShapes
{
protected:
	int ID;
	Color Colour;
	Vector2f* Point;
	int NoOfPoints;
	void InitShape()
	{
		this->Point = NULL;
		this->ID = 0;
		Colour = Color::White;
	}
public:
	AllShapes()
	{
		this->InitShape();
	}
	AllShapes(int id, Vector2f* P, int Points, Color C)
	{
		this->NoOfPoints = Points; this->ID = id;
		this->Point = new Vector2f[this->NoOfPoints];
		for (int i = 0; i < this->NoOfPoints; i++)
		{
			this->Point[i] = P[i];
		}
	}
	virtual void Draw() = 0;
	virtual void Contains(Vector2f V) = 0;
	void SetID(int id)
	{
		this->ID = id;
	}
	virtual ~AllShapes()
	{
		if (Point != NULL)
		{
			delete[] Point; Point = NULL;
		}
		this->InitShape();
	}
};