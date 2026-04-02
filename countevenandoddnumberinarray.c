# include <stdio.h>
int main()
{
    int n, arr[100];
    int evenCount = 0;
    int oddCount = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }
    printf("The number of even elements in the array is: %d\n", evenCount);
    printf("The number of odd elements in the array is: %d\n", oddCount);
    return 0;
}