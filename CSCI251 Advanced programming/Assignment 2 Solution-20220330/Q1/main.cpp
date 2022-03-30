//
//  main.cpp
//  CSCI251 - Assignment 2_Q1
//
//  Created by Yik Hin Garret Lai on 24/12/2021.
//

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "Matrix.h"
using namespace std;
int main(int argc, const char * argv[]) {
    // Do not modify this code
    srand(time(NULL));
    const int max_row = 3, max_col = 3;
    Matrix m1(max_row, max_col);
    for (int i = 0; i < max_row; i++){
        for (int j = 0; j < max_col; j++){
            m1.set(i, j, (rand()%5 + 1));
        }
    }
    cout << "=========Matrix M1====================" << endl;
    m1.display();
    cout << endl;
    Matrix m2(max_row, max_col);
    for (int i = 0; i < max_row; i++){
        for (int j = 0; j < max_col; j++){
            m2.set(i, j, (rand()%5 + 1));
        }
    }
    cout << "=========Matrix M2====================" << endl;
    m2.display();
    cout << endl;
    cout << "===========Test Case: Dot Product: M1 dot M2 ============" << endl;
    m1.multiply(m2);
    m1.display();
    cout << "===========End of Dot Product Test Case==================" << endl;
    
    Matrix m3(max_row, max_col);
    for (int i = 0; i < max_row; i++){
        for (int j = 0; j < max_col; j++){
            m3.set(i, j, (rand()%5 + 1));
        }
    }
    cout << "\n=========Matrix M3====================" << endl;
    m3.display();
    m3.add(m2);
    
    cout << "\n=========Matrix M3 + M2====================" << endl;
    m3.display();
    m3.subtract(m2);
    cout << "\n=========Matrix M3 - M2====================" << endl;
    m3.display();
    return 0;
}
