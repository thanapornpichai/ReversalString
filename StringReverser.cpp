#include "StringReverser.hpp"
#include <iostream>
#include <cstring> 

using namespace std;

StringReverser::StringReverser(const char* input) {
    length = strlen(input);

    originalString = new char[length + 1];
    reversedString = new char[length + 1];

    const char* wordInput = input;
    char* wordOutout = originalString;
    while (*wordInput != '\0') {
        *wordOutout++ = *wordInput++;
    }
    *wordOutout = '\0';

    const char* pointerIn = originalString + length - 1;
    char* pointerOut = reversedString;
    while (pointerIn >= originalString) {
        *pointerOut++ = *pointerIn--;
    }
    *pointerOut = '\0';
}

void StringReverser::printStrings() {
    cout << "Original string: " << originalString << endl;
    cout << "Reversed string: " << reversedString << endl;
}

void StringReverser::ResetReverser() {
    delete[] originalString;
    delete[] reversedString;
}
