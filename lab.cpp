#include <iostream>
#include <queue>
#include <string>

int main() {
    int cnt[10] = {0};
    int c;
    bool pass = true;
    for (int n = 22; n < 1000000; n++) {
        c = n;
        pass = true;
        // clear the cnt array
        for (int i = 0; i < 10; i++) {
            cnt[i] = 0;
        }
        for (int i = 0; c > 0; i++) {
            cnt[c % 10]++;
            c /= 10;
        }
        for (int i = 0; i < 10; i++) {
            if (cnt[i] && cnt[i] != i) {
                pass = false;
            }
        }
        if (pass) {
            std::cout << n << std::endl;
        }
    }
}
