//
// Created by Gauthier Germain (https://github.com/ax-IO)
//

#include <iostream>
#include "Polygon.h"

using namespace std;
Polygon::Polygon(){};

Polygon::Polygon(float WIDTH, float HEIGHT) : WIDTH(WIDTH), HEIGHT(HEIGHT) {

}

float Polygon::area() const {
    float a = -1;
    return a;
}

/////////////////////////////////
/////////////////////////////////

Rectangle::Rectangle(float WIDTH, float HEIGHT) : Polygon(WIDTH, HEIGHT) {}

float Rectangle::area() const {
    float a = WIDTH * HEIGHT;
    return a;
}
/////////////////////////////////
/////////////////////////////////

Triangle::Triangle(float WIDTH, float HEIGHT) : Polygon(WIDTH, HEIGHT) {}

float Triangle::area() const {
    float a = (WIDTH * HEIGHT)/2;
    return a;
}

/////////////////////////////////
/////////////////////////////////
