#include <iostream>

using namespace std;

int main() {
    cout << "Title" << endl << "-----------------" << endl << "'Content'" << endl;

    int num;
    cout << "Enter an integer: " << flush;
    cin >> num;
    cout << "You entered: " << num << endl;

    string word;
    cout << "Enter a word: " << flush;
    cin >> word;
    cout << "You entered: " << word << endl;

    cin.ignore();

    return 0;
}