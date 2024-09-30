// Given an array of integers, count how many numbers are even and how many are odd

#include <stdio.h>

int countEvenOdd(int arr[], int size) {
    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    return evenCount, oddCount;
}