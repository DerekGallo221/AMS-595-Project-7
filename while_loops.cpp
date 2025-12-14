#include <iostream>
#include <vector>
#include "print_vector.cpp"

int main() {
    std::vector<int> values = {1, 2};
    int i = 2;
    // Start with 1 and 2, add up the two previous value to get next value in the sequance
    while (values[i-1] + values[i-2] < 4000000) {
        values.push_back(values[i-1] + values[i-2]);
        ++i;
    }

    print_vector(values);
    return 0;
}