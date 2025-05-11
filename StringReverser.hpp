#ifndef STRINGREVERSER_HPP
#define STRINGREVERSER_HPP

class StringReverser {
private:
    char* originalString;
    char* reversedString;
    int length;

public:
    StringReverser(const char* input); 
    void printStrings();      
    void ResetReverser();         
};

#endif
