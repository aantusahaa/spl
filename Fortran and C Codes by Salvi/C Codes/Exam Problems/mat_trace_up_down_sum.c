#include <stdio.h>

int main() {
    int matrix[3][3];
    int trace = 0;
    int sumAboveDiagonal = 0;
    int sumBelowDiagonal = 0;

    printf("Enter the elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the trace (sum of diagonal elements)
    for (int i = 0; i < 3; i++) {
        trace += matrix[i][i];
    }

    // Calculate the sum of elements above the main diagonal
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            sumAboveDiagonal += matrix[i][j];
        }
    }

    // Calculate the sum of elements below the main diagonal
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < i; j++) {
            sumBelowDiagonal += matrix[i][j];
        }
    }

    printf("Trace of the matrix: %d\n", trace);
    printf("Sum of elements above the main diagonal: %d\n", sumAboveDiagonal);
    printf("Sum of elements below the main diagonal: %d\n", sumBelowDiagonal);

    return 0;
}
