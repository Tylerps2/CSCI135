/*
Author: Martin Czarnecki
Course: CSCI-135
Instructor: Tong Yi
Assignment: E3.1
*/

#include <iostream>

int main(){
    int input;
    std::cin >> input;
    if(input == 0)      std::cout << "zero" << std::endl;
    else if(input > 0)  std::cout << "positive" << std::endl;
    else                std::cout << "negative" << std::endl;
}