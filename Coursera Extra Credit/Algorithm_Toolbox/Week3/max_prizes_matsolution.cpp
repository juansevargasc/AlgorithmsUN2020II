#include <iostream>
#include <vector>

using std::vector;

vector<int> optimal_summands(int n) {
    vector<int> summands;
    for (int i = 1; i <= n; i++) {
        n -= i;
        std::cout << n << "  ";
        if (n <= i) {
            summands.push_back(n + i);
            std::cout << "n + i: " << n + i << "\n";
        } else if (n == 0) {
            summands.push_back(i);
            std::cout << " i: " << i << "\n";
            break;
        } else {
            summands.push_back(i);
            std::cout << "2i: " << i << "\n";
        }
    }
    return summands;
}

int main() {
    int n;
    std::cin >> n;
    vector<int> summands = optimal_summands(n);
    std::cout << summands.size() << '\n';
    for (size_t i = 0; i < summands.size(); ++i) {
        std::cout << summands[i] << ' ';
    }
}