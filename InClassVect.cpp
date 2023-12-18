#include <vector>
#include <iostream>
#include <algorithm>

int main() {
    std::vector<int> v1 = {5, 9, -1, 200, 0};

    // Display the vector
    for (int i : v1) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // Sort the vector
    std::sort(v1.begin(), v1.end());

    // Display the vector again
    for (int i : v1) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}