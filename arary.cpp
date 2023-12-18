//Aaron Malton
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

const int arraySize = 101;

// Function to generate random unique numbers between 1 and 1000
void generateRandomUniqueNumbers(int arr[], int size) {
    std::srand(std::time(0));
    for (int i = 1; i <= 1000; ++i) {
        arr[i - 1] = i;
    }
    std::random_shuffle(arr, arr + 1000);
}

// Function to find the largest and smallest elements
void findLargestAndSmallest(const int arr[], int size, int& largest, int& smallest) {
    largest = arr[0];
    smallest = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
}

// Function to calculate the sum of all elements
int calculateSum(const int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

// Function to calculate the average
double calculateAverage(const int arr[], int size) {
    int sum = calculateSum(arr, size);
    return static_cast<double>(sum) / size;
}

// Function to find the median
double findMedian(const int arr[], int size) {
    if (size % 2 == 0) {
        return static_cast<double>(arr[size / 2 - 1] + arr[size / 2]) / 2.0;
    } else {
        return static_cast<double>(arr[size / 2]);
    }
}

int main() {
    int uniqueNumbers[1000];
    generateRandomUniqueNumbers(uniqueNumbers, 1000);

    int largest, smallest;
    findLargestAndSmallest(uniqueNumbers, arraySize, largest, smallest);

    int sum = calculateSum(uniqueNumbers, arraySize);
    double average = calculateAverage(uniqueNumbers, arraySize);
    double median = findMedian(uniqueNumbers, arraySize);

    std::cout << "Largest Element: " << largest << std::endl;
    std::cout << "Smallest Element: " << smallest << std::endl;
    std::cout << "Sum of Elements: " << sum << std::endl;
    std::cout << "Average: " << average << std::endl;
    std::cout << "Median: " << median << std::endl;

    std::cout << "Array Contents: ";
    for (int i = 0; i < arraySize; ++i) {
        std::cout << uniqueNumbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
