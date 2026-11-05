/*
    This program implements all of the streams.
*/


#include <iostream>


int main(){
    std::string name;

    //Taking data from the user:
    std::cout << "Enter your name: " << std::endl;
    std::cin >> name;

    //Printing the data to the terminal:
    std::cout << "Hello " << name << "!!" << std::endl;

    //Showing an error:
    std::cerr << "Something went wrong!!" << std::endl;

    //Showing a log message:
    std::clog << "This is a log message." << std::endl;


    return 0;
}