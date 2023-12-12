#pragma once
#include "Line.h"

class Polygon : public Line
{
public:
	Polygon(QVector<Line> vectorOfLines);
	~Polygon();
	QVector<Line>& getVectorOfLines();

private:
	QVector<Line> mVectorOfLines;
};

