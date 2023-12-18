#include <iostream>

using namespace std;

int main(){

    int num1, num2;
    int addnum(int num1, int num2);
    double addnum(double num1, double num2);
    
    
    cout <<"Enter a number: " << endl;
    cin >> num1;
    cout << "Enter another number to add: "<< endl;
    cin >> num2;

    cout << "The sum of " << num1 << " and " << num2 << " is " << addnum(num1, num2) << endl;

}

int addnum(int num1, int num2){
    return num1 + num2;
}

double addnum(double num1, double num2){
    return num1 + num2;
}

