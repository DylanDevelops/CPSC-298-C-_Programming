/** 
 * Full Name: Dylan M. Ravel
 * Student ID: 2445987
 * Chapman Email: ravel@chapman.edu
 * Course Number and Section: CPSC-298-13
 * Assignment or Exercise Number: Programming Assignment 1
*/

#include <iostream>

double ConvertToMetricTons(double ounces) {
    return ounces / 35273.92;
}

int main() {
    std::cout << "Input the weight of a package of breakfast cereal in ounces: ";
    double answer;
    std::cin >> answer;

    std::cout << "Your " << answer << " oz cereal box is " << ConvertToMetricTons(answer) << " metric tons." << std::endl;

    return 0;
}