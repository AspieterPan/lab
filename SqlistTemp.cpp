#include <cstdlib>
#include <iostream>
using namespace std;
#define MaxSize 10

typedef struct {
        int data[MaxSize];
        int length;
} SqList;

int initSqlist(SqList &myList) {
    srand(time(nullptr));

    for (int i = 0; i < MaxSize; i++) {
        myList.data[i] = rand() % 20 + 1;
    }
    myList.length = MaxSize;

    for (int i = 0; i < MaxSize; i++) {
        cout << myList.data[i] << ", ";
    }
    cout << endl;
    return 0;
}

int main() {
    SqList myList;
    initSqlist(myList);
    return 0;
}
