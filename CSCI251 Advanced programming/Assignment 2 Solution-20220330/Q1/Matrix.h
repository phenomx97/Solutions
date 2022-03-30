//
//  Matrix.hpp
//  CSCI251 - Assignment 2_Q1
//
//  Created by Yik Hin Garret Lai on 24/12/2021.
//

#ifndef Matrix_h
#define Matrix_h

#include <stdio.h>

class Matrix{
private:
    int rows, cols;
    double** p;
    
public:
    Matrix();     // a default constructor
    Matrix(int, int);    //a parameterized constructor
    Matrix(const Matrix &); // a copy constructor
    
    void set(int i, int j, double val); //set value at i and j
    double get(int& i, int & j) const; //get value at i and j
    
    //Assigns (copies) a Matrix.  Return the same
    Matrix& assign(const Matrix &);

    //Adds two Matrices and returns the result
    Matrix& add(const Matrix&);

    //Subtracts two Matrices and returns the result
    Matrix& subtract(const Matrix&);

    //Returns the dot product of two Matrices.  Refer below fig.
    Matrix& multiply(const Matrix&);

    //Element-wise multiplies two Matrices and return the result.
    //Refer below fig.
    Matrix& multiplyElement(const Matrix&);

    //Add a value to all elements in the Matrix
    Matrix& add(double);

    //Multiply all elements in the Matrix by a value
    Matrix& multiply(double);

    //Displays all elements in the Matrix.
    //The result should look like a matrix
    void display();

    //destructor
    ~Matrix();

};

#endif /* Matrix_hpp */
