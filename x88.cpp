#include <iostream>
using namespace std;


int main(){
    char CharOne = 'C';
    char *CharPointer = &CharOne;


    int intArray[10] = {1,2,3,4,5,6,7,8,9,10};
    int *intPointer = intArray;

    int (&intArrayRef)[10] = intArray;

    const char* stringArray[] = {"Apple, Banana, Cherry"};
    const char** stringArrayPointer = stringArray;
    
    char** CharPointerPointer = &CharPointer;

    const int constInt = 42;
    const int* constIntPtr = &constInt;

    int anotherInt = 24;
   
    for (int i = 0; i < 10; ++i) {
        std::cout << intArrayRef[i] << " ";
    }
    std::cout << std::endl;

    char** CharPointerPointer;
    CharPointerPointer = &CharPointer;

    std::cout << "Values in the string array using stringArrayPointer: ";
    for (int i = 0; i < 3; ++i) {
        std::cout << *(stringArrayPointer + i) << " ";
    }
    std::cout << std::endl;

    std::cout << "Value pointed to by charPointerPointer: " << **CharPointerPointer << std::endl;

    std::cout << "Value of constInt: " << constInt << std::endl;

    std::cout << "Value pointed to by constIntPtr: " << *constIntPtr << std::endl;

    int* constIntPointer = &anotherInt;
    std::cout << "Value of yetAnotherInt using constIntPointer: " << *constIntPointer << std::endl;

    const int* constIntPtrConstPointer = &constInt;
    std::cout << "Value of constInt using constIntPtrConstPointer: " << *constIntPtrConstPointer << std::endl;

    return 0;






}