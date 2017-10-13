#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    int ntests;
    long long n;
    cin >> ntests;
    for (int j = 0; j < ntests; ++j) {
        cin >> n;
        int prime = 0;
        while (n % 2 == 0)
            n /= 2;
        if (n == 2)
            prime = 2;
        else if (n == 3)
            prime = 3;
        else {
            int stopper = sqrt(n) + 1;
            for (int i = 3; i <= stopper; i += 2) {
                if (n % i == 0) {
                    n /= i;
                    stopper = sqrt(n) + 1;
                    if (prime < i)
                        prime = i;
                    i = 3;
                }
            }
            if (!prime)
                prime = n;
        }
        cout << prime << endl;
    }
    return 0;
}
