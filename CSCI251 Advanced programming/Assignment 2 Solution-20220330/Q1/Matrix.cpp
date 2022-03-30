//
//  Matrix.cpp
//  CSCI251 - Assignment 2_Q1
//
//  Created by Yik Hin Garret Lai on 24/12/2021.
//

#include "Matrix.h"
#include "iostream"
using namespace std;

// a default constructor
Matrix::Matrix(){
    rows = cols = 1;
    p = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        p[i] = new double[cols];
    }
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            p[i][j] = 0;
        }
    }
}

//a parameterized constructor
Matrix::Matrix(int r, int c){
    rows = r;
    cols = c;
    p = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        p[i] = new double[cols];
    }
    
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            p[i][j] = 0;
        }
    }
}

// a copy constructor
Matrix::Matrix(const Matrix &mx){
    rows = mx.rows;
    cols = mx.cols;
    p = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        p[i] = new double[cols];
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            p[i][j] = mx.p[i][j];
        }
    }
}


//set value at i and j
void Matrix::set(int i, int j, double val){
    if(i < rows && j < rows)
        p[i][j] = val;
    else
        cout << "Out of bound!" << endl;
}

//get value at i and j
double Matrix::get(int& i, int & j) const{
    if(i < rows && j < rows)
        return p[i][j];
    else{
        cout << "Out of bound!" << endl;
        return -1;
    }
}

//Assigns (copies) a Matrix.  Return the same
Matrix& Matrix::assign(const Matrix & mx){
    if (this == &mx) {
        return *this;
    }

   if (rows != mx.rows || cols != mx.cols) {
       for (int i = 0; i < rows; i++) {
           delete[] p[i];
       }
       delete[] p;

       rows = mx.rows;
       cols = mx.cols;
   }

   for (int i = 0; i < rows; i++) {
       for (int j = 0; j < cols; j++) {
           p[i][j] = mx.p[i][j];
       }
   }
   return *this;
}

//Adds two Matrices and returns the result
Matrix& Matrix::add(const Matrix& mx){
    
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            p[i][j] += mx.p[i][j];
        }
    }
    return *this;
}

//Subtracts two Matrices and returns the result
Matrix& Matrix::subtract(const Matrix& mx){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            p[i][j] -= mx.p[i][j];
        }
    }
    return *this;
}

double scalar_dot(double * r, int r_size, double * c){
    double product = 0;
    for(int i = 0; i < r_size; i++){
        product += r[i]*c[i];

    }
    return product;
}


//Returns the dot product of two Matrices.  Refer below fig.
Matrix& Matrix::multiply(const Matrix& mx){
    Matrix temp_p = *this;
    double product = 0;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            double *temp_col = new double[mx.cols];
            for(int k = 0; k < cols; k++){
                temp_col[k] = mx.p[k][j];
            }

            product = scalar_dot(temp_p.p[i], temp_p.rows, temp_col);
            
            p[i][j] = product;
            delete[] temp_col;
            product = 0;
        }
    }
    return *this;
}

//Element-wise multiplies two Matrices and return the result.
//Refer below fig.
Matrix& Matrix::multiplyElement(const Matrix& mx){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            p[i][j] *= mx.p[i][j];
        }
    }
    return *this;
}

//Add a value to all elements in the Matrix
Matrix& Matrix::add(double val){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            p[i][j] += val;
        }
    }
    return *this;
}

//Multiply all elements in the Matrix by a value
Matrix& Matrix::multiply(double val){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            p[i][j] *= val;
        }
    }
    return *this;
}

//Displays all elements in the Matrix.
//The result should look like a matrix
void Matrix::display(){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << p[i][j] << "\t";
        }
        cout << endl;
    }
}

//destructor
Matrix::~Matrix(){
    for (int i = 0; i < rows; i++) {
        delete[] p[i];
    }
    delete[] p;
}
