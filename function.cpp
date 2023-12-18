#include <iostream>
//Aaron Malton


void function1(const char* str, int times) {
    for (int i = 0; i < times; i++) {
        std::cout << str << std::endl;
    }
}

void function2(const char* str) {
    static int callCount = 0;
    for (int i = 0; i <= callCount; i++) {
        std::cout << str << std::endl;
    }
    callCount++;
}

int main() {
    const char* text = "Hello, World!";
    function1(text, 3);  // This will print "Hello, World!" three times.

    function2(text);  // This will print "Hello, World!" once.
    function2(text);  // This will print "Hello, World!" twice.

    return 0;
}
