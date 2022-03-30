//
//  main.cpp
//  CSCI251 - Assignment 1 - Q1
//
//  Created by Yik Hin Garret Lai on 31/12/2021.
//

#include <iostream>
#include "ZooAnimal.h"
using namespace std;
int main(int argc, const char * argv[]) {
    // DO NOT CHANGE THIS FILE
    
    ZooAnimal an1;
    an1.setName("White Tiger");
    an1.setCageNumber(34);
    an1.setWeight(132);
    
    cout << "Animal 1 info: " << endl;
    an1.printInfo();
    cout << endl;
    
    ZooAnimal an2 = an1;
    cout << "Animal 2 info: " << endl;
    an2.printInfo();
    cout << endl;
    
    ZooAnimal an3("Grey Elephant", 13, 1219);
    cout << "Animal 3 info: " << endl;
    an3.printInfo();
    return 0;
}
