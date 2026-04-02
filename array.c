#include<stdio.h>
int main()
{
    int n ,arr[100],max;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (int i = 1; i < n; i++)
    if (arr[i] > max)

    {
        max = arr[i];
    }
    printf("The largest element in the array is: %d", max);
    return 0;
}
