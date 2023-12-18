#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int iQuote(int value) {
    return value;
}

double iQuote(double value) {
    return value;
}

char iQuote(char value) {
    return value;
}

int main() {
    char choice;
    int value;
    int value2 = rand() % 100;
    int result1 = 0;
    double result2 = 0.0;
    char result3 = 0;

    cout << "Enter 'i' for integer, 'd' for double, or 'c' for char: ";
    cin >> choice;

    if (choice == 'i') {
        cout << "Enter an integer: ";
        cin >> value;
        result1 = iQuote(value);
    } else if (choice == 'd') {
        cout << "Enter a double: ";
        cin >> result2;
    } else if (choice == 'c') {
        cout << "Enter a char: ";
        cin >> result3;
    }

    cout << "result1: " << result1 << endl;
    cout << "result2: " << result2 << endl;
    cout << "result3: " << result3 << endl;

    return 0;
}


       
    

