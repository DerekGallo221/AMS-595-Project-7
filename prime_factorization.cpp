#include <iostream>
#include <vector>
#include "isprime.cpp"
#include "factor.cpp"
#include "print_vector.cpp"

std::vector<int> prime_factorize(int n) {
    // Find factors of n
    std::vector<int> factors = factorize(n);
    std::vector<int> prime_factors;
    // Test if each factor is prime and add them to a new vector if they are
    for (size_t j = 0; j < factors.size(); ++j) {
        if (isprime(factors[j])) {
            prime_factors.push_back(factors[j]);
        }
    }
    return prime_factors;
}

void test_prime_factorize() {
print_vector(prime_factorize(2));
print_vector(prime_factorize(72));
print_vector(prime_factorize(196));
}

int main() {
    test_prime_factorize();
    return 0;
}