//
// Created by Gauthier Germain (https://github.com/ax-IO)
//

#ifndef TD10_POLYGON_H
#define TD10_POLYGON_H


class Polygon {
protected:
    float WIDTH;
    float HEIGHT;

public:
    //constructeur a 2 param.
    Polygon();
    Polygon(float WIDTH, float HEIGHT);

    //Méthodes
    virtual float area () const;

    void printarea();
};

class Rectangle: public Polygon{

public:
    Rectangle(float WIDTH, float HEIGHT);

    virtual float area() const;
};

class Triangle: public Polygon{
public:
    Triangle(float WIDTH, float HEIGHT);

    virtual float area() const;
};
#endif //TD10_POLYGON_H
