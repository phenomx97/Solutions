//
//  ZooAnimal.hpp
//  CSCI251 - Assignment 1 - Q1
//
//  Created by Yik Hin Garret Lai on 31/12/2021.
//

#ifndef ZooAnimal_h
#define ZooAnimal_h

#include <stdio.h>
#include <string>

class ZooAnimal{
 private:
    std::string name;
    int cageNumber;
    double weight;

public:
    //For task 1 - 4 at this file, only create signatures.  Implementation should be
    //completed in its .cpp file
    

    //Task 1A: Create a default constructor.  Set name as "" and other integral
    //        variables as 0.
    
    ZooAnimal();
    
    //Task 2A: Create a copy constructor.
    
    ZooAnimal(const ZooAnimal&);
    
    //Task 3A: Create a parameterized constructor that takes 3 inputs and allocate them
    //        into appropriate attributes
    
    ZooAnimal(std::string, int, double);
    
    //Task 4A: Create setters and getters for all 3 attributes
    
    void setName(std::string);
    std::string getName() const;
    
    void setCageNumber(int);
    int getCageNumber() const;
    
    void setWeight(double);
    double getWeight() const;
    
    //Task 5A: Create a destructor
    ~ZooAnimal();
    
    //Task 6: Create a function printInfo() that prints the info of a zoo animal
    void printInfo();
    
};


#endif /* ZooAnimal_h */
