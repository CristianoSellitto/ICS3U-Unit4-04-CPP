// Copyright Cristiano 2022
//
// Created by Cristiano Sellitto
// Created in November 2022
// A program that finds if the user's
// number between 0 and 9 is equal to the random number

#include <iostream>
#include <string>
#include <random>

int randomNumber;
int chosenInt;

int main() {
    // Finds if the chosen number from 0 to 9 is equal to the random number

    std::random_device rseed;
    std::mt19937 rgen(rseed());
    std::uniform_int_distribution<int> idist(0, 9);
    randomNumber = idist(rgen);
    try {
        while (true) {
            std::cout << std::endl;
            std::string chosenNumber;
            std::cout << "Enter a number from 0-9: ";
            std::cin >> chosenNumber;
            std::cout << std::endl;
            chosenInt = std::stoi(chosenNumber);
            if (chosenInt == randomNumber) {
                std::cout << "You got the number right!";
                std::cout << std::endl;
                std::cout << "The number was " << randomNumber << ".";
                std::cout << std::endl;
                break;
            } else if (chosenInt > randomNumber) {
                std::cout << chosenInt << " is higher than the random number.";
            } else if (chosenInt < randomNumber) {
                std::cout << chosenInt << " is lower than the random number.";
            }
            std::cout << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "This input isn't an integer.";
        std::cout << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
