// Copyright (c) Cameron Carter All rights reserved
//
// Created by: Cameron Carter
// Created on: May 2021
// This program tells the user if a number is positive or negative

#include <iostream>

int main() {
    // this function determines if a number is positive or negative
    int enteredInteger;

    // Input
    std::cout << "Enter an integer: ";
    std::cin >> enteredInteger;

    // Process and Output
    if (enteredInteger > 0) {
        std::cout << "\n" << enteredInteger << " is positive." << std::endl;
    } else if (enteredInteger < 0) {
        std::cout << "\n" << enteredInteger << " is negative." << std::endl;
    } else {
        std::cout << "\n" << enteredInteger << " is zero." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
