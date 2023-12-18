#include <iostream>
using namespace std;
//Aaron M

int arr[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

void reverse2DArray(int arr[][3], int size) {
    int tempArry;
    for (int i = 0; i < size / 2; i++) {
        for (int j = 0; j < size; j++) {
            tempArry = arr[i][j];
            arr[i][j] = arr[size - i - 1][j];
            arr[size - i - 1][j] = tempArry;
        }
    }
}

void printArray(int arr[][3]) {
    cout << "array" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    printArray(arr);
    reverse2DArray(arr, 3);
    printArray(arr);
    return 0;
}