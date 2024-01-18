#include <iostream>
#include <math.h>

using namespace std;

int factor_sum(int n) {
    int sum = 0;
    int i = 2;
    for (; i < sqrt(n); i++) {
        if (n % i == 0) {
            sum += i;
            sum += n / i;
        }
    }
    if (i * i == n) {
        sum += i;
    }
    return sum + 1;
}

void test_factor_sum() {
    cout << factor_sum(4) << endl;
    cout << factor_sum(6) << endl;
    cout << factor_sum(8) << endl;
    cout << factor_sum(220) << endl;
    cout << factor_sum(284) << endl;
}

void affine_num(int x, int y) {
    int another;
    for (int i = x; i < y; i++) {
        another = factor_sum(i);
        if (another >= x && another <= y && another != i &&
            factor_sum(another) == i) {
            cout << i << " " << another << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main() {
    int n;
    int x;
    int y;
    cin >> n;
    while (n) {
        cin >> x >> y;
        affine_num(x, y);
        n--;
    }
    return 1;
}
