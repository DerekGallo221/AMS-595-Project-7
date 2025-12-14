#include <iostream>
#include <vector>
#include "print_vector.cpp"

std::vector<int> factorize(int n) {  
    std::vector<int> factors;
    // Iterate from 1 to n and check if i is a factor of n
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            factors.push_back(i);
        }
    }
    return factors;
}

void test_factorize() {
    print_vector(factorize(2));
    print_vector(factorize(72));
    print_vector(factorize(196));
}
// int main() {     
//  test_factorize();
//  return 0;
// }