//
//  Circle.cpp
//  CSCI251 - Assignment 2 - Q2
//
//  Created by Yik Hin Garret Lai on 25/12/2021.
//

#include "Circle.h"
#include <cmath>
#include <iostream>
#include <algorithm>

// A default constructor
// Set the centre and radius of circle as 0.
Circle::Circle(){
    h = k = radius = 0;
}

// Constructor with the centre of circle.
// Set the radius as 0.
Circle::Circle (double h, double k){
    this->h = h;
    this->k = k;
    radius = 0;
}

// Constructor with the centre of circle and raidus.
Circle::Circle (double h, double k, double r){
    this->h = h;
    this->k = k;
    this->radius = r;
}

// Set centre of the circle
void Circle::setCentre(double h, double k){
    this->h = h;
    this->k = k;
}

void Circle::getCircleInfo(double &h, double &k, double &r){
    h = this->h;
    k = this->k;
    r = this->radius;
}

// Set radius of the circle
void Circle::setRadius(double r){
    radius = r;
}

// Returns area of the circle
double Circle::getArea(){
    return M_PI * radius * radius;
}

// Returns the index of the largest circle within an array of circles
// If two circles are in the same size, return the first encountered
int Circle::findLargest(Circle* c_arr, int size){
    int ind_largest = 0;
    double largest = c_arr[0].getArea();
    if(size > 0){
        for(int i = 1; i < size; i++){
            if(largest < c_arr[i].getArea()){
                ind_largest = i;
                largest = c_arr[i].getArea();
            }
        }
        return ind_largest;
    }else{
        std::cout <<"Array is empty." << std::endl;
        return -1;
    }
}

// Check whether parameterized circle is within the circle
// Hint:
// The smaller circle lies completely inside the bigger circle without touching
// each other at a point of circumference.
// If this case happens, the sum of the distance between the centres and
// smaller radius is lesser than the bigger radius, then obviously the smaller
// circle lies completely inside the circle, without touching the circumference.

bool Circle::checkWithin(const Circle& c){
    double dist = sqrt(pow((h - c.h),2) + pow((k - c.k),2));
    if((dist + c.radius) < radius)
        return true;
    else
        return false;
}

// Return an array of circles that are within the largest circle
Circle** Circle::overlapping(Circle* vc, int arrSize){
    Circle** vOverlap = new Circle*[arrSize];
    for(int i = 0; i < arrSize; i++){
        vOverlap[i] = nullptr;
    }
    int count = 0;
    int indLargest = findLargest(vc, arrSize);
    for(int i = 0; i < arrSize; i++){
        if(i != indLargest && vc[indLargest].checkWithin(vc[i])){
            Circle* tempCircle = new Circle(vc[i].h, vc[i].k, vc[i].radius);
            vOverlap[count] = tempCircle;
            count++;
        }
    }
    return vOverlap;
}

//destructor
Circle::~Circle(){
    
}
