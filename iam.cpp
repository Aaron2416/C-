#include <iostream>
using namespace std;

class Base
{
public:
    virtual void iam()
    {
        cout << "Base " << endl;
    }
};

class Derived : public Base {
public:
    void iam() override {
        cout << " Derived" << endl;
        
    }
};

class Derived2 : public Base {
public:
    void iam() override {
        cout << "Derived2" << endl;
        
    }
};

int main(){
    Derived obj1;
    Derived2 obj2;


    Base* ptr = &obj1;
    Base* ptr2 = &obj2;

    ptr->iam();
    ptr2->iam();

    std::cout << "ponter one" << ptr << std::endl;
    std::cout << "ponter two" << ptr2 << std::endl;


    return 0;
}
