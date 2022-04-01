// Copyright (c) 2022 Hertz All rights reserved.
//
// Created by: Hertz Antonella
// Created on: 28 mar 2022
// this function compares the guessed number to the random number

#include <iostream>

#include <random>

int main() {
  int someRandomNumber;
  int guessNumeber;

  std::random_device rseed;

  std::mt19937 rgen(rseed());  // mersenne_twister


  std::uniform_int_distribution<int> idist(0, 9);  // [0,9]

  someRandomNumber = idist(rgen);

    // This ask the user to enter any number between 0 and 9
    std::cout <<"Enter the number between 0 to 9:";
    std::cin >> guessNumeber;
    std::cout << "" << std::endl;

    // this function compares the guessed number to the random number
    if (guessNumeber == someRandomNumber) {
      std::cout << "your guess is correct!";
  } else {
       std::cout << "your guess is incorrect << the correct guess is ";
      std::cout << someRandomNumber;
    }
}
