#include <iostream>

using namespace std;

int main() {
    // stack pointers


    int original_variable = 42;

    // reference
    int& reference_variable = original_variable;

    // pointer
    int* pointer_variable = &original_variable;

    cout << "Original Variable:  " << &original_variable << endl;
    cout << "Reference Variable: " << &reference_variable << endl;
    cout << "Pointer Variable: " << pointer_variable << endl;


    // heap pointers
    int* dynamic_integer = new int(777);

    cout << "Value on the heap: " << *dynamic_integer << endl;

    delete dynamic_integer;
}