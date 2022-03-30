//
//  Circle.hpp
//  CSCI251 - Assignment 2 - Q2
//
//  Created by Yik Hin Garret Lai on 25/12/2021.
//

#ifndef Circle_h
#define Circle_h

#include <stdio.h>
#include <vector>
class Circle{
    private:
        double h, k, radius; // (h, k) = circle coordinate

    public:

        // A default constructor
        // Set the centre and radius of circle as 0.
        Circle();

        // Constructor with the centre of circle.
        // Set the radius as 0.
        Circle (double h, double k);

        // Constructor with the centre of circle and raidus.
        Circle (double h, double k, double r);

        // Set centre of the circle
        void setCentre(double h, double k);
    
        // Get centre of the circle
        void getCircleInfo(double &h, double &k, double &r);

        // Set radius of the circle
        void setRadius(double r);

        // Returns area of the circle
        double getArea();

        // Returns the index of the largest circle within an array of circles
        // If two circles are in the same size, return the first encountered
        int findLargest(Circle* c_arr, int size);

        // Check whether parameterized circle is within the circle
        // Hint:
        // The smaller circle lies completely inside the bigger circle without touching
        // each other at a point of circumference.
        // If this case happens, the sum of the distance between the centres and
        // smaller radius is lesser than the bigger radius, then obviously the smaller
        // circle lies completely inside the circle, without touching the circumference.

        bool checkWithin(const Circle& c);

        // Return a vector of circles overlapping the largest circle
        Circle** overlapping(Circle* vc, int arrSize);

        //destructor
        ~Circle();
};

#endif /* Circle_hpp */
