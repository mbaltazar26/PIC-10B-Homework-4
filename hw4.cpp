//
//  hw4.cpp
//  Pic 10B Homework 4
//
//  Created by Michaella Baltazar on 11/23/19.
//  Copyright © 2019 Michaella Baltazar. All rights reserved.
//

#include <stdio.h>
#include "ComplexVector.h"
#include <fstream>

using namespace std;

int main()
{
    vector <Complex> v1;
    vector <Complex> v2;
    v1.push_back(Complex(2,4));
    v1.push_back(Complex(3,5));
    v1.push_back(Complex(-1,-3));
    v1.push_back(Complex(8,10));
    v2.push_back(Complex(-10,3.5));
    v2.push_back(Complex(4,7.3));
    v2.push_back(Complex(2,-8));
    v2.push_back(Complex(10,-142));
    ComplexVector cv1 = ComplexVector(v1);
    ComplexVector cv2 = ComplexVector(v2);
 
    cout << "v1 = ";
    cv1.printV();
    cout << endl;
    cout << "v2 = ";
    cv2.printV();
    cout << endl;
    cout << "v1 + v2 = ";
    (cv1+cv2).printV();
    cout << endl;
    cout << "v1 - v2 = ";
    (cv1-cv2).printV();
    cout << endl;
    cout << "v1 * v2 = ";
    (cv1*cv2).printV();
    cout << endl;
    cout << "v1 / v2 = ";
    (cv1/cv2).printV();
    cout << endl;

    cv2.printSix(1, Complex(0,0));
    cv2.printS();
}
