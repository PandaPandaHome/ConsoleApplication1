#pragma once
#include "Shape.h"
#include "Point.h"
#include <array>
class Triangle : public Shape
{
public:
	virtual void CalcPerimeter();
	float OutputPerimeter();
	void InputVertexValues(int idx, float x, float y);

private:
	std::array<Point, 3> Vertex;	
	float side_length[3];
	float peri_length;
};

