#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::sqrt;


void PrintHighestPrime() {
    long long prime = 0;
    long long number;
    cin >> number;
    if (number < 0)
        number *= -1;
    if (number == 2)
        prime = 2;
    while (number % 2 == 0)
        number /= 2;
    if (number == 2)
        prime = 2;
    else if (number == 3)
        prime = 3;
    else {
        int stopper = sqrt(number) + 1; // All prime divisors of number are less then (sqrt(number) + 1)
                                        // and number by itself can be prime divisor.
        bool was_changed = false; // If (was_changed == false) after for loop then
                                  // the biggest prime is the last-edited number.
        for (long long i = 3; i <= stopper; i += 2) {
            was_changed = false;
            if (number % i == 0) {  // Then restart the loop from beginnig with updated number 
                was_changed = true; // to find out if it's the last (and the biggest) prime.
                number /= i;
                stopper = sqrt(number) + 1;
                if (prime < i)
                    prime = i;
                i = 1;
            }
        }
        if (!was_changed)
            prime = number;
    }
    cout << prime << endl;
}

int main() {
    int n_of_tests;
    cin >> n_of_tests;
    for (int j = 0; j < n_of_tests; ++j)
        PrintHighestPrime();
    return 0;
}
