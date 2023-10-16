#include <cstdlib>
#include <iostream>
#include <thread>
using namespace std;
#define MaxSize 10
#define isOrder false

typedef struct {
        int data[MaxSize];
        int length;
} SqList;

void printList(SqList &L) {
    for (int i = 0; i < L.length; i++) {
        cout << L.data[i] << ", ";
    }
    cout << endl;
    cout << "length: " << L.length << endl;
}

int initSqlist(SqList &myList) {
    srand(time(nullptr));
    if (isOrder) {
        myList.data[0] = 1;
        for (int i = 1; i < MaxSize; ++i) {
            myList.data[i] = myList.data[i - 1] + rand() % 3;
        }
    } else {
        for (int i = 0; i < MaxSize; i++) {
            myList.data[i] = rand() % 20 + 1;
        }
    }
    myList.length = MaxSize;

    printList(myList);
    return 0;
}

bool delMin(SqList &L, int &res) {
    if (L.length == 0)
        return false;
    int locMin = 0;
    for (int i = 0; i < L.length; ++i) {
        if (L.data[i] < L.data[locMin])
            locMin = i;
    }
    res = L.data[locMin];
    L.data[locMin] = L.data[L.length - 1];
    L.length--;
    return true;
}

void reverseList(SqList &L) {
    int swap;
    for (int i = 0; i < L.length / 2; i++) {
        swap = L.data[i];
        L.data[i] = L.data[L.length - i - 1];
        L.data[L.length - i - 1] = swap;
    }
}

void delX(SqList &L, int x) {
    int delCout = 0;
    for (int i = 0; i < L.length; i++) {
        if (L.data[i] == x) {
            delCout++;
        } else {
            L.data[i - delCout] = L.data[i];
        }
    }
    L.length -= delCout;
}

void uniqueList(SqList &L) {
    if (L.length < 2)
        return;
    int coutDel = 0;
    for (int i = 1; i < L.length; ++i) {
        if (L.data[i - coutDel - 1] == L.data[i])
            coutDel++;
        else
            L.data[i - coutDel] = L.data[i];
    }
    L.length -= coutDel;
}

SqList *mergeList(SqList A, SqList B) {
    int i = 0, j = 0, k = 0;
    SqList *C = new SqList;
    while (j < B.length) {
        if (i >= A.length || A.data[i] > B.data[j]) {
            C->data[k] = B.data[j];
            j++;
            k++;
        } else {
            C->data[k] = A.data[i];
            i++;
            k++;
        }
    }
    while (i < A.length) {
        C->data[k] = A.data[i];
        k++;
        i++;
    }
    C->length = 10;
    return C;
}

int main() {
    SqList A;
    initSqlist(A);

    printList(A);
    return 0;
}
