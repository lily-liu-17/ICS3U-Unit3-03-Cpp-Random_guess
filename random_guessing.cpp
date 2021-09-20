// Copyright Lily Liu All rights reserved.
//
// Created by: Lily Liu
// Created on: Sept 2021
// This lets user guess a number
// Program will say right or wrong

#include <iostream>
#include <random>


int main() {
    // This lets user guess a number
    int answer;
    int guessNumber;

    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(1, 9);  // [1,9]

    answer = idist(rgen);

    // input
    std::cout << "Enter a number between 1-9 : ";
    std::cin >> guessNumber;

    // process and output
    if (guessNumber == answer) {
        std::cout << "You guessed correctly!";
    } else {
        std::cout << "You guessed wrong!";
    }


    std::cout << "" << std::endl;
    std::cout << "The correct answer is " << answer <<std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
