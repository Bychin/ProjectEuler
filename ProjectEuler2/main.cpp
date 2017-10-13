#include <iostream>

using namespace std;


int main() {
    int n_of_tests;
    long long num;
    cin >> n_of_tests;
    for (int i = 0; i < n_of_tests; ++i) {
        long long n1 = 2, n2 = 0;
        long long result = 0;
        cin >> num;
        if (num == 2)
            cout << 2 << endl;
        else {
            while (n1 < num) {
                result += n1;
                long long tmp = 4 * n1 + n2; // for every even number in Fibonacci: F(n)= 4 * F(n-1) + F(n-2)
                n2 = n1;
                n1 = tmp;  
            }        
            cout << result << endl;
        }
    }
    return 0;
}
