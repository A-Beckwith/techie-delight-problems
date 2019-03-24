#include <stdio.h>
#include <iostream>
using namespace std;

void rearrange(int arr[], int pos[], int size) {
    int aux[size];
    for(int i = 0; i < size; i++) {
        aux[pos[i]] = arr[i];
    }

    for(int i = 0; i < size; i++) {
        arr[i] = aux[i];
    }
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int pos[] = { 3, 2, 4, 1, 0 };
    int size = sizeof(arr) / sizeof(arr[0]);

    rearrange(arr, pos, size);

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}