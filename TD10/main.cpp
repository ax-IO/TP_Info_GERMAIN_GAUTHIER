#include <iostream>
#include "Polygon.h"

void printarea(Polygon const& P) {
    std::cout<<P.area()<<std::endl;
}

int main() {

    //Test Polygone
    Polygon p(4,3);
    printarea(p);

    //Test Rectangle
    Rectangle r(4,3);
    printarea(r);

    //Test Triangle
    Triangle t(4,3);
    printarea(t);

    return 0;
}

