#include <iostream>

void swap(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void reverse(int *arry, int start, int end) {
    for (int i = start; i < (start + end) / 2; i++) {
        swap(arry[i], arry[end + start - i]);
    }
}

void shift_left(int *arry, int size, int p) {
    reverse(arry, 0, size - 1);
    reverse(arry, 0, size - p - 1);
    reverse(arry, size - p, size - 1);
}

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    shift_left(a, 10, 7);
    for (int i = 0; i < 10; i++) {
        std::cout << a[i] << ", ";
    }
    return 0;
}
