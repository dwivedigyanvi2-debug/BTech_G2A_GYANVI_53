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
    int mat[MAXR][MAXC], trans[MAXC][MAXR];
    printf("Enter matrix:\n");
    for(int i = 0; i < rows; i++) for(int j = 0; j < cols; j++) scanf("%d", &mat[i][j]);
    for(int i = 0; i < rows; i++) for(int j = 0; j < cols; j++) trans[j][i] = mat[i][j];
    printf("Transpose matrix:\n");
    for(int i = 0; i < cols; i++) {
        for(int j = 0; j < rows; j++) printf("%d ", trans[i][j]);
        printf("\n");
    }
    return 0;
}