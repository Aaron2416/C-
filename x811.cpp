
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
//Aaron M
int main() {
    string str;
    
    cout << "Enter a string to get sorted: ";
    cin >> str;

    std::sort(str.begin(), str.end());
    
    cout << "Sorted string: " << str << endl;
    
    str.erase(std::unique(str.begin(), str.end()), str.end());
    
    cout << "String after deleting duplicates: " << str << endl;

    return 0;
}