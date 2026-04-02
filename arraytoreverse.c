#include<stdio.h>
void reverseArray()
{
    int n, arr[100],tmp;
    int start = 0;
    int end;
    int temp;
    while(start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    int n, arr[100];
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");      
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    reverseArray();
    printf("The reversed array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}