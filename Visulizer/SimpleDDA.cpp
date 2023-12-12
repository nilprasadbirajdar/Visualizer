#include "stdafx.h"
#include "SimpleDDA.h"

SimpleDDA::SimpleDDA() {

}

SimpleDDA::~SimpleDDA() {

}

QVector<QVector2D>& SimpleDDA::getPixelVertices()
{
    return mPixelVertices;
}

//Code to draw a grid
void SimpleDDA::drawGrid(QVector<GLfloat>& vertices, QVector<GLfloat>& colors)
{
    const float gridSize = 8.0f;
    const float step = 1.0f;

    // Code to draw horizontal lines
    for (float y = -gridSize / 2.0f; y <= gridSize / 2.0f; y += step)
    {
        vertices << -gridSize / 2.0f << y;
        vertices << gridSize / 2.0f << y;

        colors << 1.0f << 1.0f << 1.0f;
        colors << 1.0f << 1.0f << 1.0f;
    }

    // Code to draw Vertical lines
    for (float x = -gridSize / 2.0f; x <= gridSize / 2.0f; x += step)
    {
        vertices << x << -gridSize / 2.0f;
        vertices << x << gridSize / 2.0f;

        colors << 1.0f << 1.0f << 1.0f;
        colors << 1.0f << 1.0f << 1.0f;
    }
}


//Symmetric DDA implimentation
void SimpleDDA::drawLineBySimpleDDA(Line& line, QVector<QVector2D>& pixelVertices)
{
    float dx = abs(line.getPoint2().x() - line.getPoint1().x());
    float dy = abs(line.getPoint2().y() - line.getPoint1().y());
    float steps = dx > dy ? dx : dy;
    float xInc = dx / steps;
    float yInc = dy / steps;

    /*float x = p1.x();
    float y = p1.y();*/

    while (line.getPoint1().x() < line.getPoint2().x())
    {
        pixelVertices.append(QVector2D(round(line.getPoint1().x()), round(line.getPoint1().y())));
        pixelVertices.append(QVector2D(round(line.getPoint1().x()) + 1, round(line.getPoint1().y())));
        pixelVertices.append(QVector2D(round(line.getPoint1().x()) + 1, round(line.getPoint1().y()) + 1));
        pixelVertices.append(QVector2D(round(line.getPoint1().x()), round(line.getPoint1().y()) + 1));
        line.getPoint1().setX(xInc + line.getPoint1().x());
        line.getPoint1().setY(yInc + line.getPoint1().y());
    }

    int i = 0;
    while (i < pixelVertices.size())
    {
        QVector<QVector2D> qv;
        qv.append(pixelVertices[i]);
        i++;
        qv.append(pixelVertices[i]);
        i++;
        qv.append(pixelVertices[i]);
        i++;
        qv.append(pixelVertices[i]);
        i++;
        QVector3D fillColor(1.0f, 0.0f, 0.0f);
        openglWindow->fillSquare(qv, fillColor);
    }
}


//void SimpleDDA::plotLine(Point p1, Point p2, QVector<QVector2D>& inPoints) {
//    float dx = abs(p2.x() - p1.x());
//    float dy = abs(p2.y() - p1.y());
//
//    float steps = dx > dy ? dx : dy;
//
//    float xInc = dx / steps;
//    float yInc = dy / steps;
//
//    float x = p1.x();
//    float y = p1.y();
//    for (int i = 0; i < steps; i++) {
//        inPoints.append(QVector2D(round(x), round(y)));
//        inPoints.append(QVector2D(round(x) + 1, round(y)));
//        inPoints.append(QVector2D(round(x) + 1, round(y) + 1));
//        inPoints.append(QVector2D(round(x), round(y) + 1));
//
//        x += xInc;
//        y += yInc;
//    }
//}