#include <iostream>
#include <vector>
#include <bits/stdc++.h>
//Aaorn Malton

using namespace std;

int main() {
    vector<char> alphabet = {'a','b','c','d','e','f','g','h','i','j','k','l','m',
                             'n','o','p','q','r','s','t','u','v','w','x','y','z'};
                         
    for (char i = 0; i < alphabet.size(); i++) {
        cout << alphabet[i] << endl;
    }
    
    reverse(alphabet.begin(), alphabet.end());
    for (auto i : alphabet) {
        cout << i << endl;
    }

    return 0;
}