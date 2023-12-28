#include <stdio.h>

int main() {
    int A[12] = {60, 80, 55, 90, 75, 40, 50, 85, 70, 65, 45, 55};
    int B[12], C[12];
    int sum = 0, average;
    int countB = 0, countC = 0;

    // Calculate average
    for (int i = 0; i < 12; ++i) {
        sum += A[i];
    }
    average = sum / 12;

    // Move values to arrays B and C based on the average
    for (int i = 0; i < 12; ++i) {
        if (A[i] > average) {
            B[countB++] = A[i];
        } else if (A[i] < average) {
            C[countC++] = A[i];
        }
    }

    // Display arrays A, B, and C
    printf("Array A: ");
    for (int i = 0; i < 12; ++i) {
        printf("%d ", A[i]);
    }

    printf("\nArray B: ");
    for (int i = 0; i < countB; ++i) {
        printf("%d ", B[i]);
    }

    printf("\nArray C: ");
    for (int i = 0; i < countC; ++i) {
        printf("%d ", C[i]);
    }

    return 0;
}