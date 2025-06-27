#include <iostream>
#include "Sort.hpp" 



using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

int main() {
    int test1[] = {10, 12, 17, 9, 5, 10};
    int size1 = sizeof(test1) / sizeof(test1[0]);

    int test2[] = {1, 2, 3, 4, 5, 6}; // sorted
    int size2 = sizeof(test2) / sizeof(test2[0]);

    int test3[] = {6, 5, 4, 3, 2, 1}; // reversed
    int size3 = sizeof(test3) / sizeof(test3[0]);

    int test4[] = {8}; // single element
    int size4 = 1;

    int test5[] = {}; // empty array
    int size5 = 0;


    cout << "Test 1 (random):\nBefore: ";
    printArray(test1, size1);
    Sort::QuickSort(test1, 0, size1 - 1);
    cout << "After:  ";
    printArray(test1, size1);
    cout << "-----------------------------\n";

    cout << "Test 2 (sorted):\nBefore: ";
    printArray(test2, size2);
    Sort::QuickSort(test2, 0, size2 - 1);
    cout << "After:  ";
    printArray(test2, size2);
    cout << "-----------------------------\n";

    cout << "Test 3 (reversed):\nBefore: ";
    printArray(test3, size3);
    Sort::QuickSort(test3, 0, size3 - 1);
    cout << "After:  ";
    printArray(test3, size3);
    cout << "-----------------------------\n";

    cout << "Test 4 (one element):\nBefore: ";
    printArray(test4, size4);
    Sort::QuickSort(test4, 0, size4 - 1);
    cout << "After:  ";
    printArray(test4, size4);
    cout << "-----------------------------\n";

    cout << "Test 5 (empty):\nBefore: ";
    printArray(test5, size5);
    Sort::QuickSort(test5, 0, size5 - 1);
    cout << "After:  ";
    printArray(test5, size5);
    cout << "-----------------------------\n";

    return 0;
}
