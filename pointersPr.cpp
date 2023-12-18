#include <iostream>

using namespace std;




int main() {
    int shit = 10;
    int *fuck = &shit;
    cout << *fuck << endl; 

    int *fuck2 = new int(5);
    int **bitch = &fuck2;
    cout << "Text from the function using a pointer to pointer: " << **bitch << endl;

    int fnOne;
    

    return 0;
}


int fnOne(){
    int * fuck = new int;
    int ** bitch = &fuck;
    return **bitch;
}