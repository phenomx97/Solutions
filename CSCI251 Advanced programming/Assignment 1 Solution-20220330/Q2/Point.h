//
//  Point.hpp
//  CSCI 251 - Assignment 1 - Q2
//
//  Created by Yik Hin Garret Lai on 31/12/2021.
//

#ifndef Point_h
#define Point_h

#include <stdio.h>
#include <tuple>
#include <iostream>

class Point{
private:
    int x, y; // coordinates
    
public:
    Point(); //default constructor
    Point(int, int);
   
    void setPoint(int x, int y);
    
    std::tuple<int, int>getPoint() const;
    
    void printPoint() const;
};
#endif /* Point_hpp */
