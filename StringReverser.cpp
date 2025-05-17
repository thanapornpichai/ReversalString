#include "StringReverser.hpp"
#include <iostream>
#include <cstring>

using namespace std;

StringReverser::StringReverser(const char* input) {
    length = strlen(input);
    originalString = new char[length + 1];
    reversedString = new char[length + 1];

    const char* wordInput = input;
    char* wordOutput = originalString;
    while (*wordInput != '\0') {
        *wordOutput++ = *wordInput++;
    }
    *wordOutput = '\0';

    const char* pointerIn = originalString + length - 1;
    char* pointerOut = reversedString;
    while (pointerIn >= originalString) {
        *pointerOut++ = *pointerIn--;
    }
    *pointerOut = '\0';
}

StringReverser::~StringReverser() {
    delete[] originalString;
    delete[] reversedString;
}

void StringReverser::printStrings() {
    cout << "Original string: " << originalString << endl;
    cout << "Reversed string: " << reversedString << endl;
}
