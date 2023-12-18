#include <iostream>

using namespace std;




int main(){
    int x = 2;
    int *p = &x;
    int *s = p;
    int **t = &s;
    int *z = new int(8);
    int *q = z;
    cout << &x << endl;
cout << *p << endl;
cout << **t << endl;
cout << *t << endl;
cout << t << endl;
cout << z << endl;
cout << *q << endl;
    return 0;
}

