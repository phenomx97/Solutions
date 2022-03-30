//
//  Circle.cpp
//  CSCI 251 - Assignment 1 - Q2
//
//  Created by Yik Hin Garret Lai on 31/12/2021.
//

#include <stdio.h>
#include <cmath>
#include "Circle.h"

Circle::Circle():Point(){
    radius = 1;
}

Circle::Circle(int _x, int _y, double _radius):Point(_x, _y){
    radius = _radius;
}

void Circle::setRadius(double r){
    radius = r;
}
double Circle::getRadius() const{
    return radius;
}
double Circle::area() const{
    return radius*radius*M_PI;
}
