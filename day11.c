Problem: Write a program to perform addition of two matrices having the same dimensions. The sum of two matrices is obtained by adding corresponding elements of the matrices.


  #include <stdio.h>

int main() {
    int r, c;

    // Input rows and columns
    scanf("%d %d", &r, &c);

    int A[r][c], B[r][c], sum[r][c];

    // Input first matrix
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input second matrix
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Add matrices
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Print result
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
