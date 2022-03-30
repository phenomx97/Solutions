//
//  Circle.h
//  CSCI 251 - Assignment 1 - Q2
//
//  Created by Yik Hin Garret Lai on 31/12/2021.
//

#ifndef Circle_h
#define Circle_h
#include "Point.h"

class Circle : public Point{
private:
    double radius;
    
public:
    Circle();
    Circle(int, int, double);
    void setRadius(double r);
    double getRadius() const;
    double area() const;
};

#endif /* Circle_h */
