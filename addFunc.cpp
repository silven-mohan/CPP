/*
    This program simply implements the addition of the numbers and the functions in C++.
*/


#include <iostream>


int addNumbers(int first, int second){
    return first + second;
}


int main(){
    int firstNumber = 10, secondNumber = 20;

    int sum1 = addNumbers(firstNumber, secondNumber);
    int sum2 = addNumbers(sum1, 20);

    std::cout << "The sum of the first pair of numbers is: " << sum1 << std::endl;
    std::cout << "The sum of the second pair of numbers is: " << sum2 << std::endl;


    return 0;
    
}