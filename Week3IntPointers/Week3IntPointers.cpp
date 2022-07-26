// Week3IntPointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int a;
    int b;


    std::cout << "Please enter first integer: ";

    std::cin >> a;

    std::cout << "Please enter second integer: ";

    std::cin >> b;

    int* ptrA = &a;
    int* ptrB = &b;

    std::cout << "Value #1: " << *ptrA << " Value #2: " << *ptrB;
}

