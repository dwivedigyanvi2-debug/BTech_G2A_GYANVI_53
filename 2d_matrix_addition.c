#include <stdio.h>

#define MAXR 10
#define MAXC 10

int main() {
    int rows, cols;
    printf("Enter rows and columns (max 10x10): ");
    scanf("%d %d", &rows, &cols);
    if(rows > MAXR || cols > MAXC) {
        printf("Too large\n");
        return 1;
    }
    int mat1[MAXR][MAXC], mat2[MAXR][MAXC], sum[MAXR][MAXC];
    printf("Enter first matrix:\n");
    for(int i = 0; i < rows; i++) for(int j = 0; j < cols; j++) scanf("%d", &mat1[i][j]);
    printf("Enter second matrix:\n");
    for(int i = 0; i < rows; i++) for(int j = 0; j < cols; j++) scanf("%d", &mat2[i][j]);
    for(int i = 0; i < rows; i++) for(int j = 0; j < cols; j++) sum[i][j] = mat1[i][j] + mat2[i][j];
    printf("Sum matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) printf("%d ", sum[i][j]);
        printf("\n");
    }
    return 0;
}