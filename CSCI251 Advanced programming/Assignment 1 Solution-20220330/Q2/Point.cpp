//
//  Point.cpp
//  CSCI 251 - Assignment 1 - Q2
//
//  Created by Yik Hin Garret Lai on 31/12/2021.
//

#include <stdio.h>
#include "Point.h"

Point::Point():x(0), y(0){}

Point::Point(int _x, int _y){
    x = _x;
    y = _y;
}

void Point::setPoint(int x, int y){
    this->x = x;
    this->y = y;
}

std::tuple<int, int> Point::getPoint() const{
    return std::make_tuple(x, y);
}

void Point::printPoint() const{
    std::cout << "(" << x << ", " << y << ")" << std::endl;
}
