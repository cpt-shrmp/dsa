#include <stdio.h>

// Recursive implementation of binary search
// Assume list is already sorted from least to greatest
// Return index in a[] of size n as the location of the query x
int binarySearch1(int* a, int high, int low, int x) {
    if (high >= low) {
        int mid = (high - low)/2 + low;

        if (x == a[mid]) {
            return mid;
        }

        if (x < a[mid]) {
            binarySearch1(a, high, low, x);
        }
        
        else { //x > a[mid]
            binarySearch1(a, high, low, x);
        }
    }

    return -1; // Query not found
}

// Iterative implementation of binary search
int binarySearch2(int* a, int n, int x) {
    int high = n-1;
    int low = 0;
    
    while (low <= high) {
        int mid = (high - low)/2 + low;

        if (x == a[mid]) {
            return mid;
        }

        if (x < a[mid] ) {
            high = mid;
        }

        else { // x > a[mid]
            low = mid + 1;
        }
    }

    return -1; // Query not found
}

int main() {
    // Test case 1


    // Test case 2
    int a[8] = {0, 1, 2, 3, 4, 5, 6, 7};
    for (int i = 0; i < 8; i++) {
        int j = binarySearch2(a, 8, i);
        printf("Index of value %d is: %d\n", i, j);
    }
    return 0;
}