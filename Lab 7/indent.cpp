/*
Author: Martin Czarnecki
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 7 B
*/

#include <iostream>
#include <fstream>

int numOfBrackets = 0;

std::string removeLeadingSpaces(std::string line){
    std::string newLine;
    bool locatedFirstChar = false;

    for (int j = 0; j < numOfBrackets; j++)
        newLine += '\t';

    for (int i = 0; i < line.length(); i++){
        if (line[i] == '{')     numOfBrackets++;
        if (line[i] == '}')     numOfBrackets--;
        if (!isspace(line[i]))  locatedFirstChar = true;
        if (locatedFirstChar)   newLine += line[i];
    }
    return newLine;
}

int main(){
    std::string line;

    while (std::cin){
        getline(std::cin, line, '\n');
        std::cout << removeLeadingSpaces(line) << std::endl;
    }

    return 0;
}