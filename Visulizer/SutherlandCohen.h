#pragma once
#include "Polygon.h"
#include "Line.h"
#include "Point.h"


class SutherlandCohen
{
public:
	SutherlandCohen(Line& line, Line& diagonalLine);
	~SutherlandCohen();

	int computeBinaryCode(double x, double y, Line& diagonalLine);
	void lineDrawingBySutherlandCohen(Line& line, Line& diagonalLine);

public:
	QVector<GLfloat> verticesOfOrignalLine;
	QVector<GLfloat> colorOfOrignalLine;
	//QVector<GLfloat> getVerticesOfLines();
	//QVector<GLfloat> getColorOfLines();

private:
	/*Polygon* mWindow;*/
	Line* mLine;

	const int INSIDE = 0; // 0000
	const int LEFT = 1; // 0001
	const int RIGHT = 2; // 0010
	const int BOTTOM = 4; // 0100
	const int TOP = 8; // 1000
};

