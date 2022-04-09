#pragma once
#include <iostream>
#include <vector>
#include <utility>

namespace zich
{

    class Matrix
    {
    public:
        int rows;
        int cols;
        std::vector<double> mat;

    public:
        Matrix(std::vector<double> mat,int row,int col);
        //~Matrix();
        
        std::vector<double> getMat(){
            return mat;
        }



        Matrix operator--();
        Matrix operator--(int);
        Matrix operator++();
        Matrix operator++(int);
        Matrix& operator*=(int num);
        friend Matrix operator*(Matrix &n, double num);
        friend Matrix operator*(double num, Matrix &n);


        Matrix &operator+=(const Matrix &other);
        Matrix &operator-=(const Matrix &other);
        Matrix operator+(const Matrix &other);
        Matrix operator+();
        Matrix operator-(const Matrix &other);
        Matrix operator-();


        friend bool operator==(const Matrix &a, const Matrix &b);
        friend bool operator!=(const Matrix &a, const Matrix &b);
        friend bool operator>(const Matrix &a, const Matrix &b);
        friend bool operator>=(const Matrix &a, const Matrix &b);
        friend bool operator<(const Matrix &a, const Matrix &b);
        friend bool operator<=(const Matrix &a, const Matrix &b);

        friend std::ostream &operator<<(std::ostream &os, const Matrix &num);
        friend std::istream &operator>>(std::istream &is, Matrix num);
    };
}
