//
//  ComplexVector.cpp
//  Pic 10B Homework 4
//
//  Created by Michaella Baltazar on 11/23/19.
//  Copyright © 2019 Michaella Baltazar. All rights reserved.
//

#include "ComplexVector.h"
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

ComplexVector::ComplexVector()
{
    
}

ComplexVector::ComplexVector(std::vector<Complex> given)
{
    c = given;
}


ComplexVector ComplexVector::operator+(ComplexVector a)
{
    ComplexVector sum;
    for (int i = 0; i < c.size(); i++)
    {
        Complex temp = c.at(i)+a.c.at(i);
        sum.c.push_back(temp);
    }
    return sum;
}

ComplexVector ComplexVector::operator-(ComplexVector a)
{
    ComplexVector diff;
    for (int i = 0; i < c.size(); i++)
    {
        Complex temp = c.at(i)-a.c.at(i);
        diff.c.push_back(temp);
    }
    return diff;
}


ComplexVector ComplexVector::operator/(ComplexVector a)
{
    ComplexVector diff;
    for (int i = 0; i < c.size(); i++)
    {
        Complex temp = c.at(i)/a.c.at(i);
        diff.c.push_back(temp);
    }
    return diff;
}

ComplexVector ComplexVector::operator*(ComplexVector a)
{
    ComplexVector prod;
    for (int i = 0; i < c.size(); i++)
    {
        Complex temp = c.at(i)*a.c.at(i);
        prod.c.push_back(temp);
    }
    return prod;
}

void ComplexVector::printV()
{
    for (int i = 0; i < c.size(); i++)
    {
        c.at(i).print();
        cout << ", ";
    }
}

void ComplexVector::printS()
{
    fstream fs;
    fs.open("ComplexSequence");
    for (int i = 0; i < s.size(); i++)
    {
        if (s.at(i).getImag() > 0)
            fs << s.at(i).getReal() << " + " << s.at(i).getImag() << ", ";
        else
            fs << s.at(i).getReal() << " " << s.at(i).getImag() << ", ";
    }
}

void ComplexVector::printSix(int n, Complex pass)
{
    if (n > 6)
    {
        printS();
        return;
    }
    else if (n == 1)
    {
        pass = Complex(1,1);
        s.push_back(pass);
        printSix(n+1, pass);
    }
    else if ((n > 1) && (n <= 6))
    {
        Complex top = Complex(2*n, 3*n);
        Complex bot = Complex(7, 5*n*n);
        Complex hold = top/bot;
        pass = pass*hold;
        s.push_back(pass);
        printSix(n+1, pass);
    }
}

