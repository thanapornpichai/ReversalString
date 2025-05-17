#ifndef STRINGREVERSER_HPP
#define STRINGREVERSER_HPP

class StringReverser {
private:
    char* originalString;
    char* reversedString;
    int length;

public:
    StringReverser(const char* input);
    ~StringReverser();
    void printStrings();
};

#endif
