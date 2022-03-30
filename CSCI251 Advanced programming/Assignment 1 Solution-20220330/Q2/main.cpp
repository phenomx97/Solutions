//
//  main.cpp
//  CSCI 251 - Assignment 1 - Q2
//
//  Created by Yik Hin Garret Lai on 31/12/2021.
//

#include <iostream>
#include <iomanip>
#include "Point.h"
#include "Circle.h"

#define FIXED_FLOAT(x) std::fixed <<std::setprecision(2)<< (x)

using namespace std;

int main(int argc, const char * argv[]) {
    // Don't modify the following code
    Circle cir;
    
    cir.setPoint(0, 0);
    cir.setRadius(5);
    
    auto[x, y] = cir.getPoint();
    cout << "Circle 1's coordinate is (" << x << ", " << y << ")." << endl;
    cout << "Area of circle 1 is " << FIXED_FLOAT(cir.area()) << endl;

    return 0;
}
