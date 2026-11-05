/*
    This program demonstrates Errors and Warnings.
*/

#include<iostream>

int main()
{
    //Compile Time Error:
    std::cout << "Hello, World!" << std::endl

    //Run Time Error:
    int value = 39 / 0;

    std::cout << "Value: " << value << std::endl;

    return 0;
}