// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Triangle.h"

int main()
{
    std::cout << "Hello, let's calculate triangle perimeter!\n";
    
    Triangle* nvr_tri=new Triangle;
    float x[3], y[3];
    char sep;

    for (int i = 0; i < 3; i++)
    {
        std::cout << "Please type in a vertex point x and y values separated by commons: \n";
        std::cin >> x[i] >> sep >> y[i];
        nvr_tri->InputVertexValues(i, x[i], y[i]);
    }
        
    std::cout << "Your three vertex points are\n";
    for (int i = 0; i < 3; i++)
        std::cout << "(" << x[i] << "," << y[i] << ")\n";

    nvr_tri->CalcPerimeter();
    std::cout << "The perimeter of the triange is\n";
    std::cout<<nvr_tri->OutputPerimeter();

    delete nvr_tri;
}

