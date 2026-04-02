#include <stdio.h>

#define MAXR 10
#define MAXC 10

int main() {
    int r1, c1, r2, c2;
    printf("Enter rows and columns for first matrix (max 10x10): ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for second matrix (max 10x10): ");
    scanf("%d %d", &r2, &c2);
    if(c1 != r2 || r1 > MAXR || c1 > MAXC || r2 > MAXR || c2 > MAXC) {
        printf("Invalid dimensions or too large\n");
        return 1;
    }
    int mat1[MAXR][MAXC], mat2[MAXR][MAXC], prod[MAXR][MAXC];
    printf("Enter first matrix:\n");
    for(int i = 0; i < r1; i++) for(int j = 0; j < c1; j++) scanf("%d", &mat1[i][j]);
    printf("Enter second matrix:\n");
    for(int i = 0; i < r2; i++) for(int j = 0; j < c2; j++) scanf("%d", &mat2[i][j]);
    for(int i = 0; i < r1; i++) for(int j = 0; j < c2; j++) {
        prod[i][j] = 0;
        for(int k = 0; k < c1; k++) prod[i][j] += mat1[i][k] * mat2[k][j];
    }
    printf("Product matrix:\n");
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) printf("%d ", prod[i][j]);
        printf("\n");
    }
    return 0;
}