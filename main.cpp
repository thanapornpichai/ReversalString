#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#include <iostream>
#include <cassert>
#include "StringReverser.hpp"

using namespace std;

int main() {
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    const int bufferSize = 100;
    char input[bufferSize];

    cout << "Enter a string: ";
    cin.getline(input, bufferSize);

    {
        StringReverser stringTool(input);
        stringTool.printStrings();
    }

    assert(_CrtCheckMemory()); 
    _CrtDumpMemoryLeaks(); 

    return 0;
}
