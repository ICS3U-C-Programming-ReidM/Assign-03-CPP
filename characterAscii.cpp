// Copyright (c) 2025 Reid MacLean All rights reserved.
//
// Created by: Reid MacLean
// Created on: March 2025
// This program checks if the user input is an uppercase letter,
// lowercase letter, or not a letter.

#include <iostream>

// Function to check if the character is uppercase, lowercase, or not a letter.
void CheckCase(char user_character) {
    // Check if the input is invalid (empty or incorrect character)
    if (user_character == '\0' || std::cin.fail()) {
        std::cout << "Error: Invalid input." << std::endl;  // Invalid input
    } else {
        // Get the ASCII value of the character
        int ascii_value = static_cast<int>(user_character);

        // Check if the character is uppercase
        if (ascii_value >= 65 && ascii_value <= 90) {
            std::cout << user_character << " is an uppercase letter."
                      << std::endl;
        } else if (ascii_value >= 97 && ascii_value <= 122) {
            std::cout << user_character << " is a lowercase letter."
                      << std::endl;
        } else {
            // If it's neither an uppercase nor a lowercase letter
            std::cout << user_character << " is not a letter." << std::endl;
        }
    }
}

int main() {
    // Greeting message
    std::cout << "Hello, thank you for using the character guesser."
              << std::endl;

    // Get user input (character)
    char user_character;
    std::cout << "Enter a character: ";
    std::cin >> user_character;

    // Call the function to check the character
    CheckCase(user_character);

    return 0;
}
