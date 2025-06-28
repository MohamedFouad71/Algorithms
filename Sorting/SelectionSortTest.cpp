#include <iostream>
#include "Sort.hpp" 

using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

int main() {
    int test1[] = {64, 25, 12, 22, 11};
    int size1 = sizeof(test1) / sizeof(test1[0]);

    int test2[] = {1, 2, 3, 4, 5}; // Already sorted
    int size2 = sizeof(test2) / sizeof(test2[0]);

    int test3[] = {5, 4, 3, 2, 1}; // Reversed
    int size3 = sizeof(test3) / sizeof(test3[0]);

    int test4[] = {10}; // Single element
    int size4 = 1;

    int test5[] = {}; // Empty array
    int size5 = 0;

    cout << "Test 1:\nBefore: ";
    printArray(test1, size1);
    Sort::SelectionSort(test1, size1);
    cout << "After:  ";
    printArray(test1, size1);
    cout << "-----------------------------\n";

    cout << "Test 2:\nBefore: ";
    printArray(test2, size2);
    Sort::SelectionSort(test2, size2);
    cout << "After:  ";
    printArray(test2, size2);
    cout << "-----------------------------\n";

    cout << "Test 3:\nBefore: ";
    printArray(test3, size3);
    Sort::SelectionSort(test3, size3);
    cout << "After:  ";
    printArray(test3, size3);
    cout << "-----------------------------\n";

    cout << "Test 4:\nBefore: ";
    printArray(test4, size4);
    Sort::SelectionSort(test4, size4);
    cout << "After:  ";
    printArray(test4, size4);
    cout << "-----------------------------\n";

    cout << "Test 5:\nBefore: ";
    printArray(test5, size5);
    Sort::SelectionSort(test5, size5);
    cout << "After:  ";
    printArray(test5, size5);
    cout << "-----------------------------\n";

    return 0;
}
