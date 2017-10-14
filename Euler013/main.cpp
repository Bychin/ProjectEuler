#include <iostream>
#include <cmath> // std::log10
#include <string>


long long SumOfResizedNumbers(int n) { // n - amount of entered numbers
    long long result = 0;
    std::string number;
    
    for (int i = 0; i < n; ++i) {
        std::cin >> number;
        number.resize(11);
        result += std::stoll(number, 0, 10);
    }
    return result;
}

void CorrectedResultToTen(long long& result_, int n) { // n - amount of result_'s digits
    if (n > 10)
        while (n != 10) {
            result_ /= 10;
            --n;
        }
}

int main() {
    int n_of_nums;
    std::cin >> n_of_nums;
    
    long long result = SumOfResizedNumbers(n_of_nums);
    int n_of_digits = std::log10(result) + 1;
    CorrectedResultToTen(result, n_of_digits);
    
    std::cout << result << std::endl;
}
