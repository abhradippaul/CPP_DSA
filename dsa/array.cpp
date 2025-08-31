#include <iostream>
using namespace std;

void printArray (int* arr, int length) {

    // Print array elements using a loop
    for (int i = 0; i < length; i++) {
        cout << "Element at index " << i << ": " << arr[i] << endl;
    }
}

void removeEven(int* arr, int length) {
    int newInt[length] = {0, 0, 0, 0, 0};
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if(arr[i] % 2 != 0) {
            newInt[count] = arr[i];
            count++;
        }
    }
    // cout << "Array after removing even numbers: " << newInt << endl;
    printArray(newInt, count);
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    // int* arr = new int[5];
    // Print array elements using a loop
    int length = sizeof(arr)/sizeof(arr[0]);
    // printArray(arr, length);
    removeEven(arr, length);

    return 0;
}