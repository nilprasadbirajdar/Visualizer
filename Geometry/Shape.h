#pragma once
#include "Line.h"
#include <vector>
#include "pch.h"

class GEOMETRY_API Shape
{
public:
	Shape();
	Shape(Point3D inMin, Point3D inMax);
	~Shape();

public:
	std::vector<Line> lines();

private:
	std::vector<Line> mLines;
};



