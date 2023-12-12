#include "stdafx.h"
#include "Polygon.h"

Polygon::Polygon(QVector<Line> vectorOfLines)
{
	mVectorOfLines = vectorOfLines;
}

Polygon::~Polygon()
{

}

QVector<Line>& Polygon::getVectorOfLines()
{
	return mVectorOfLines;
}