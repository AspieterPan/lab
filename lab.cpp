#include <iostream>
void recur(int n) {
    std::cout << n << std::endl;
    recur(n + 1);
}

int main() {
    recur(1);
    return 0;
}