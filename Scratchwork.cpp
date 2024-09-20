#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int num = 10;
    int* numPtr = &num;

    cout << num << endl;
    cout << *numPtr << endl;

    return 0;
}