//
//  main.cpp
//  CSCI251 - Assignment 2 - Q2
//
//  Created by Yik Hin Garret Lai on 25/12/2021.
//

#include <iostream>
#include <vector>
#include "Circle.h"
using namespace std;

int main(int argc, const char * argv[]) {
    const int numCircle = 5;
    Circle* arr_c = new Circle[numCircle];
    
    arr_c[0] = (Circle(0, 0, 3));
    arr_c[1] = (Circle(0, 0, 5));
    arr_c[2] = (Circle(25, 25, 1));
    arr_c[3] = (Circle(1, 1, 1));
    arr_c[4] = (Circle(-1, -2, 2));
    
    Circle cTest;
    int lar = cTest.findLargest(arr_c, numCircle);
    double h_lar, k_lar, r_lar;
    arr_c[lar].getCircleInfo(h_lar, k_lar, r_lar);
    cout << "Area of the largest circle (" << h_lar << ", " << k_lar << ") with radius " << r_lar << " is: " << arr_c[lar].getArea() << endl;
    Circle** overlap = cTest.overlapping(arr_c, numCircle);
    int count = 0;
    while(overlap[count] != nullptr){
        double h, k, r;
        overlap[count]->getCircleInfo(h, k, r);
        cout << "Circle centered at (" << h << ", " << k << ") with radius " << r << " overlaps the largest circle." << endl;
        count++;
    }
    cout << "# of overlapping the largest circle is: " << count << endl;
    
    return 0;
}
