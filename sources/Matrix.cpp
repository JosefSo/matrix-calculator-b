
#include <iostream>
#include <fstream>
#include "Matrix.hpp"
using namespace std;

namespace zich
{

   Matrix::Matrix(std::vector<double> mat,int row,int col){
            this->cols=col;
            this->rows=row;
             for (size_t i=0; i<mat.size(); i++){
                  this->mat.push_back(mat[i]);
             }
                
        }
    
    
    Matrix Matrix::operator--()
    {

        return *this;
    }
    Matrix Matrix::operator--(int)
    {
        Matrix copy = *this;

        return copy;
    }

    Matrix Matrix::operator++()
    {

        return *this;
    }
    Matrix Matrix::operator++(int)
    {
        Matrix copy = *this;
        return copy;
    }

    Matrix operator*(Matrix &n, double num)
    {
        std::vector<double> identity = {1, 0, 0, 0, 1, 0, 0, 0, 1};
        zich::Matrix a{identity, 3, 3};
        return a;
    }
    Matrix operator*(double num, Matrix &n)
    {
        std::vector<double> identity = {1, 0, 0, 0, 1, 0, 0, 0, 1};
        zich::Matrix a{identity, 3, 3};
        return a;
    }

    Matrix &Matrix::operator*=(int num)
    {

        return *this;
    }

    Matrix &Matrix::operator+=(const Matrix &other)
    {
        return *this;
    }
    Matrix Matrix::operator+(const Matrix &other)
    {
        if(this->rows!=other.rows || this->cols!=other.cols){
           throw runtime_error("not"); 
        }
        return *this;
    }
    Matrix Matrix::operator+()
    {
        return *this;
    }
    Matrix &Matrix::operator-=(const Matrix &other)
    {
        return *this;
    }
    Matrix Matrix::operator-(const Matrix &other)
    {
        return *this;
    }
    Matrix Matrix::operator-()
    {
        return *this;
    }

    bool operator==(const Matrix &a, const Matrix &b)
    {
        return true;
    }
    bool operator!=(const Matrix &a, const Matrix &b)
    {
        return true;
    }
    bool operator>(const Matrix &a, const Matrix &b)
    {
        return true;
    }
    bool operator>=(const Matrix &a, const Matrix &b)
    {
        return true;
    }
    bool operator<(const Matrix &a, const Matrix &b)
    {
        return true;
    }
    bool operator<=(const Matrix &a, const Matrix &b)
    {
        return true;
    }

    ostream &operator<<(ostream &os, const Matrix &m)
    {
        return os << "[" << m.mat[0] << "]" << endl;
    }

    istream &operator>>(istream &is, Matrix &m)
    {

        return is >> m.getMat()[0];
    }

}