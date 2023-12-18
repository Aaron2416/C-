#include <iostream>

int main() {
    std::string days[12] = {
        "first", "second", "third", "fourth", "fifth", "sixth",
        "seventh", "eighth", "ninth", "tenth", "eleventh", "twelfth"
    };

    std::string gifts[12] = {
        "A partridge in a pear tree", "Two turtle doves, and", "Three french hens",
        "Four calling birds", "Five golden rings", "Six geese a-laying",
        "Seven swans a-swimming", "Eight maids a-milking", "Nine ladies dancing",
        "Ten lords a-leaping", "Eleven pipers piping", "Twelve drummers drumming"
    };

    for (int i = 0; i < 12; ++i) {
        std::cout << "On the " << days[i] << " day of Christmas, my true love sent to me\n";
        
        for (int j = i; j >= 0; --j) {
            if (j == 0 && i != 0) {
                std::cout << "And " << gifts[j] << "\n";
            } else {
                std::cout << gifts[j] << "\n";
            }
        }

        std::cout << "\n";
    }

    return 0;
}
