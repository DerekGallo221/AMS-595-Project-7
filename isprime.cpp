#include <iostream>
#include <vector>

bool isprime(int n) {
bool result;
    std::vector<int> factors;
    // Find all factors of a number
    for ( int i = 1; i <= n; i++) {
            if (n % i == 0) {
                factors.push_back(i);
            }
            else {
            }
        }
    // Check if there are only two factors (1 and the number itself)
    if (factors.size() == 2) {
        result = true;
    }
    else {
        result = false;
    }
    return result;
}

void test_isprime() {
    std::cout << std::boolalpha;
    std::cout << "isprime(2) = " << isprime(2) << '\n';
    std::cout << "isprime(10) = " << isprime(10) << '\n';
    std::cout << "isprime(17) = " << isprime(17) << '\n';
}
//Test
// int main() {
//     test_isprime();
//     return 0;
// }