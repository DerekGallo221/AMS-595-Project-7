
#include <iostream>
#include <vector>

std::vector<std::vector<int>> pascal_by_loops(int n) {
    std::vector<std::vector<int>> p_triangle;
    for (int i = 0; i < n; i++) { // Loop for each n rows
        std::vector<int> row(i + 1, 1); // Initialize row with i 1s
        for (int j = 1; j < i; j++) { //  Loop for each non-boundary elements
            // Caluclate each non-boundary element using values in previous row
            row[j] = p_triangle[i - 1][j - 1] + p_triangle[i - 1][j];
        }
        p_triangle.push_back(row); // Add row to vector
    }
    return p_triangle;
}
//Test the function
int main() {
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;
    std::cout << "n = " << n << std::endl;
    std::vector<std::vector<int>> result = pascal_by_loops(n);
    for (const auto& row : result) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}