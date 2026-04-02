#include<stdio.h>
int main() {
 int r,c,i,j,sum;
    printf("enter the number of rows and columns");
    scanf("%d %d",&r,&c);
    int a[r][c];
    printf("enter the elements of matrix");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    return 0;
    }
}