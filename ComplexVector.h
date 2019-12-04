//
//  ComplexVector.hpp
//  Pic 10B Homework 4
//
//  Created by Michaella Baltazar on 11/23/19.
//  Copyright © 2019 Michaella Baltazar. All rights reserved.
//

#ifndef ComplexVector_h
#define ComplexVector_h
#include <stdio.h>
#include "Complex.h"
#include <iostream>
#include <vector>

class ComplexVector
{
public:
    ComplexVector();
    ComplexVector(std::vector<Complex> given);
    ComplexVector operator+ (ComplexVector a);
    ComplexVector operator- (ComplexVector a);
    ComplexVector operator* (ComplexVector a);
    ComplexVector operator/ (ComplexVector a);
    void printV();
    void printS();
    void printSix(int n, Complex pass);
private:
    std::vector<Complex> c;
    std::vector<Complex> s;
};


#endif /* ComplexVector_h */
