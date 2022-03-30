//
//  ZooAnimal.cpp
//  CSCI251 - Assignment 1 - Q1
//
//  Created by Yik Hin Garret Lai on 31/12/2021.
//

#include "ZooAnimal.h"
#include <iostream>

// Task 1B: Implement the default constructor
ZooAnimal::ZooAnimal():name(""), cageNumber(0), weight(0){}

// Task 2B: Implement the copy constructor.
//          Be reminded to decide whether deep copy is necessary
ZooAnimal::ZooAnimal(const ZooAnimal& animal){
    name = animal.name;
    cageNumber = animal.cageNumber;
    weight = animal.weight;
}

// Task 3B: Implement the parameterized constructor that takes 3 inputs and allocate them
//          into appropriate attributes

ZooAnimal::ZooAnimal(std::string n, int c, double w):name(n), cageNumber(c), weight(w){}

// Task 4B: Implement setters and getters for all attributes
void ZooAnimal::setName(std::string n){
    name = n;
}
std::string ZooAnimal::getName() const{
    return name;
}

void ZooAnimal::setCageNumber(int c){
    cageNumber = c;
}

int ZooAnimal::getCageNumber() const{
    return cageNumber;
}

void ZooAnimal::setWeight(double w){
    weight = w;
}

double ZooAnimal::getWeight() const{
    return weight;
}

// Task 5B: Implement destructor
ZooAnimal::~ZooAnimal(){}

// Task 6B: Implement printInfo() function
void ZooAnimal::printInfo(){
    std::cout << "Name: " << name << std::endl;
    std::cout << "Weight: " << weight << "kg" <<std::endl;
    std::cout << "Cage: " << cageNumber << std::endl;
}
