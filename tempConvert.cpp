// Copyright (c) 2022 Melody Berhane All rights reserved.
//
// Created by: Melody Berhane
// Created on: Jan. 18, 2022
// This program coverts the temp in celsius to fahrenheit.

#include <iostream>
#include <iomanip>


void CalculateFarenheit() {
    // declares variables
    std::string tempCelsiusString;
    float tempCelsiusFloat;
    float tempFahrenheit;

    // collects temperature from user
    std::cout << "Enter the temperature (°C): ";
    std::cin >> tempCelsiusString;

    // checks if the user has entered the correct number
    try {
        // convert the user's guess to a float
        tempCelsiusFloat = std::stof(tempCelsiusString);

        // calculates the fahrenheit
        tempFahrenheit = (9.0/5.0) * tempCelsiusFloat + 32;

        std::cout << std::fixed << std::setprecision(2) << tempCelsiusFloat;
        std::cout << "°C is equal to " << std::fixed;
        std::cout << std::setprecision(2) << tempFahrenheit << "°F\n";

    // determines if the the answer is a number
    } catch (std::invalid_argument) {
    // tells user did the input is not a number
    std::cout << tempCelsiusString << " is not a number.\n";
    }
}


int main() {
    // calls the fahrenheit function
    CalculateFarenheit();
}
