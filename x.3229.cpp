#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    
    std::vector<int*> ptrVector = {new int(1), new int(2), new int(3)};

    int* ptrToRemove = ptrVector[1]; // Choose the pointer you want to remove
    ptrVector.erase(std::remove(ptrVector.begin(), ptrVector.end(), ptrToRemove), ptrVector.end());
 
    delete ptrToRemove;

    for (int* ptr : ptrVector) {
        std::cout << *ptr << " ";
    }

    return 0;
}
