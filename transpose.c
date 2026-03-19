#include<stdio.h>

int main() {
    int i, j, a, b, mat1[20][20], mat2[20][20];
    
    // 1. Input dimensions
    printf("Enter the rows and columns:\n");
    scanf("%d %d", &a, &b);
    
    // 2. Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            // FIX: Use mat1[i][j] instead of mat1[a][b]
            scanf("%d", &mat1[i][j]);
        }
    }
    
    // 3. Display the original matrix
    printf("The formed matrix is:\n");
    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            // FIX: Use mat1[i][j] instead of mat1[a][b]
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }
    
    // 4. Perform transposition (rows become columns, columns become rows)
    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            mat2[j][i] = mat1[i][j];
        }
    }
    
    // 5. Display the transposed matrix
    printf("The transposed matrix is:\n");
    for (i = 0; i < b; i++) { // Note: Loops are reversed (b rows, a cols)
        for (j = 0; j < a; j++) {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
