#include <iostream>

// Function to insert an element into a sorted array (or a sorted sub-array)
void insert(int arr[], int n, int key) {
    int j = n - 1; // Start from the last element of the sorted part

    // Shift elements greater than key one position ahead
    while (j >= 0 && arr[j] > key) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = key; // Place key in its correct position
}

// Recursive function to sort an array using insertion sort
void recursiveInsertionSort(int arr[], int n) {
    // Base case: if array has 0 or 1 element, it's already sorted
    if (n <= 1) {
        return;
    }

    // Sort the first n-1 elements recursively
    recursiveInsertionSort(arr, n - 1);

    // Insert the last element (arr[n-1]) into its correct position
    // in the already sorted first n-1 elements.
    // The 'insert' function will handle this.
    int lastElement = arr[n - 1];
    insert(arr, n - 1, lastElement); 
}

// Utility function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    printArray(arr, n);

    recursiveInsertionSort(arr, n);

    std::cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}