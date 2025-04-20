#ifndef RECTANGLE_H
#define RECTANGLE_H

struct Rectangle {
    double _width;
    double _height;

    Rectangle(double width, double height);

    double calcArea();
    double calcPerimeter();
};

#endif