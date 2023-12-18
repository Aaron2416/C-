#include <iostream>
#include <cmath>
using namespace std;
//Aaron Malton

bool isPrime(int num) {
    if (num <= 1) {
        return false; // Numbers less than or equal to 1 are not prime
    }

    if (num <= 3) {
        return true; // 2 and 3 are prime
    }

    if (num % 2 == 0 || num % 3 == 0) {
        return false; // Numbers divisible by 2 or 3 are not prime
    }

    // Check for factors from 5 up to the square root of num
    // Needed online help to figure this out
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false; // If num is divisible by i or i+2, it's not prime
        }
    }

    return true; // If none of the conditions above are met, num is prime
}

int main() {
    for (int num = 2; num <= 100; num++) {
        if (isPrime(num)) {
            cout << num << " is a prime number." << endl;
        }
    }

    return 0;
}



