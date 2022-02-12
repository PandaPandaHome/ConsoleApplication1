#include "Triangle.h"

void Triangle::CalcPerimeter()
{
	float dx, dy;
		
	dx = Vertex[0].x - Vertex[1].x;
	dy = Vertex[0].y - Vertex[1].y;
	side_length[0] = sqrtf(dx * dx + dy * dy);

	dx = Vertex[1].x - Vertex[2].x; 
	dy = Vertex[1].y - Vertex[2].y;
	side_length[1] = sqrtf(dx * dx + dy * dy);

	dx = Vertex[2].x - Vertex[0].x;
	dy = Vertex[2].y - Vertex[0].y;
	side_length[2] = sqrtf(dx * dx + dy * dy);

	peri_length = side_length[0] + side_length[1] + side_length[2];
		
}

float Triangle::OutputPerimeter()
{
	return peri_length;
}

void Triangle::InputVertexValues(int idx, float x, float y)
{

	Vertex[idx].x = x;
	Vertex[idx].y = y;
}