#include <vector>
#include <iostream>
void print_vector(std::vector<int> v) {
    //Convert each elemnt of a vector to a string and print them
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
}
//Test
// int main() {
//     std::vector<int> v = {1, 2, 3, 4, 5};
//     print_vector(v);
//     return 0;
// }