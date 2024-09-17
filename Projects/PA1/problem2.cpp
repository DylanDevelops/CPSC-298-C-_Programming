/** 
 * Full Name: Dylan M. Ravel
 * Student ID: 2445987
 * Chapman Email: ravel@chapman.edu
 * Course Number and Section: CPSC-298-13
 * Assignment or Exercise Number: Programming Assignment 1
*/

#include <iostream>

std::string GetCorruptedString(std::string text) {
    text[0] = '?';
    return text;
}

int main() {
    std::cout << "Input a sentence: " << std::endl;
    std::string answer;
    getline(std::cin, answer);

    if(answer == "") {
        std::cerr << "There was no input data to corrupt!" << std::endl;
        return 1;
    }

    std::cout << "You inputted: \"" << GetCorruptedString(answer) << "\"" << std::endl;
    std::cout << "Successfully read " << (answer.length() - 1) << " out of " << answer.length() << " characters." << std::endl;

    return 0;
}