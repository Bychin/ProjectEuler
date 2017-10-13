#include <iostream>

using namespace std;


int main() {
    int tests_n;
    cin >> tests_n;
    for (int i = 0; i < tests_n; ++i) {
        long long num, result = 0, del_3, del_5;
        cin >> num;
        if (num < 0) num *= -1;
        
        if (num >= 3) {
            long long num_copy = num - 1;
            while (num_copy % 3 != 0) --num_copy;
            del_3 = (3 + num_copy) * ((num_copy - 3) / 3 + 1) / 2; // sum of arithmetic sequence (3, 6, 9, 12, 15, ...)
        } else del_3 = 0;
        
        if (num >= 15) { // eliminate duplicates from del_3 which will be in del_5 (15, 30, 45, ...)
            long long num_copy = num - 1;
            while (num_copy % 15 != 0) --num_copy;
            del_3 -= (15 + num_copy) * ((num_copy - 15) / 15 + 1) / 2;
        }

        if (num >= 5) {
            long long num_copy = num - 1;
            while (num_copy % 5 != 0) --num_copy;
            del_5 = (5 + num_copy) * ((num_copy - 5) / 5 + 1) / 2; // sum of arithmetic sequence (5, 10, 15, 20, ...)
        } else del_5 = 0;
        
        result = del_3 + del_5;
        cout << result << endl;
    };     
    return 0;
}
