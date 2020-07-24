#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void insertionSort(int arr[], int n) { 
    int i, j, k; 
    for (i = 1; i < n; i++) { 
        k = arr[i]; 
        j = i - 1; 
        while (j >= 0 && arr[j] > k) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = k; 
    } 
} 

void printArray(int arr[], int size) {
    for (int i=0; i<size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    
    int arr[] = {10, 44, 2, 4, 14, 3, 4, 5, 1, 90};
    int size = sizeof(arr)/sizeof(int);
    insertionSort(arr, size);
    printArray(arr, size);
    
    exit(0);
}