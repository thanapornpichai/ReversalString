#include <iostream>
#include "StringReverser.hpp"

using namespace std;

int main() {
    const int bufferSize = 100;
    char input[bufferSize];

    cout << "Enter a string: ";
    cin.getline(input, bufferSize);

    StringReverser stringTool(input);
    stringTool.printStrings();

    return 0;
}