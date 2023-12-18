#include <iostream> 
using namespace std; 

int main()
{
    int colum;
    
    // user input and validation
    while (true) {
    cout << "enter hight of dimond from 3 to 15: ";
    cin >> colum; 
        
        if (colum >= 3 && colum <= 15 && colum % 2 == 1) {
            break;
       }else {
          cout <<  "pleses inter an odd number form 3 to 15";
        }
    }

    //printing out the diammond 
    for (int i = 1; i <= colum; i += 2) {
        int spaces = (colum - i) / 2;
        int stars = i;

        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }

        for (int j = 0; j < stars; j++) {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = colum - 2; i >= 1; i -= 2) {
        int spaces = (colum - i) / 2;
        int stars = i;

        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }

        for (int j = 0; j < stars; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
