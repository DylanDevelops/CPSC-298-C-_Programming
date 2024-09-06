#include <string>
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    cout << "Hello World!" << endl;

    std::cout << "Printing without using namespace std" << std::endl;

    int* myArr = new int[5];

    return 0;
}