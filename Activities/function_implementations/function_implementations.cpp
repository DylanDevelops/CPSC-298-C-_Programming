/** 
 * Full Name: Dylan M. Ravel, Noslen Cruz-Muniz, Ashlee Nguyen
 * Student ID: 2445987, 2447745, 2454382
 * Chapman Email: ravel@chapman.edu, cruzmuniz@chapman.edu, ashlnguyen@chapman.edu
 * Course Number and Section: CPSC-298-13
 * Assignment or Exercise Number: Function Implementations
*/

#include <iostream>

using namespace std;

// This function rounds a double to an int. If the decimal part is < 0.5, round down. Else, round up. 

int roundDouble(double d) {
    if (d - int(d) < 0.5){
        return int(d);
    } else {
        return int(d) + 1;
    }
}


// fibonacci(0) = 1, fibonacci(1) = 1, fibonacci(n) = fibonacci(n - 1) + fibonacci(n - 2) 
// Sequence would look like: fib(0)=1, fib(1)=1, fib(2)=2, fib(3)=3, fib(4)=5, fib(5)=8, fib(6)=13, fib(7)=21, fib(8)=34, ... 
int fibonacci(int num) {
    if (num == 0) {
        return 1;
    } else if (num == 1){
        return 1;
    } else {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}

// a word that's the exact same forwards and backwards 
bool checkPalindrome(const string& s) {
    string backwards = "";
    for(int i = s.size() - 1; i >= 0; --i) {
        backwards += s[i];
    }

    return s == backwards;
}

// modify DNA 'A' <---> 'T' and 'C' <---> 'G' in place (no returning), regardless of upper or lower case.  
// If it's an unrecognized letter, put '?' 
void DNAcomplement(string& dna) {
    for(int i = 0; i < dna.size(); ++i) {
        switch(dna[i]) {
            case 'A':
                dna[i] = 'T';
                break;

            case 'T':
                dna[i] = 'A';
                break;

            case 'C':
                dna[i] = 'G';
                break;

            case 'G':
                dna[i] = 'C';
                break;

            default:
                dna[i] = '?';
                break;
        }
    }
}

int main(int argc, char* argv[]) {
    // Double
    double test1 = 2.3;
    double test2 = 2.5;
    double test3 = 3.339;

    cout << roundDouble(test1) << endl;
    cout << roundDouble(test2) << endl;
    cout << roundDouble(test3) << endl;

    // Fibonacci
    cout << "fibonacci(0): " << fibonacci(0) << " (Expected: 1)" << endl;
    cout << "fibonacci(1): " << fibonacci(1) << " (Expected: 1)" << endl;
    cout << "fibonacci(2): " << fibonacci(2) << " (Expected: 2)" << endl;
    cout << "fibonacci(3): " << fibonacci(3) << " (Expected: 3)" << endl;
    cout << "fibonacci(4): " << fibonacci(4) << " (Expected: 5)" << endl;
    cout << "fibonacci(5): " << fibonacci(5) << " (Expected: 8)" << endl;
    
    // Palindrome
    string s1 = "ashlee";
    string s2 = "racecar";

    cout << checkPalindrome(s1) << endl;
    cout << checkPalindrome(s2) << endl;

    // DNA
    string dnaStrand = "ATGGCTAC";
    cout << dnaStrand << endl;
    DNAcomplement(dnaStrand);
    cout << dnaStrand << endl; // SHould be TACGGATA

    return 0;
}