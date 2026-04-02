#include<stdio.h>
void bubble_sort (int n, int arr[])
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int i, n,arr[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
        bubble_sort(n,arr);
        printf("sorted array");
        for(i=0;i<n;i++)
        {
            printf("arr[%d]=%d\n",i,arr[i]);
        }
    
    return 0;
}
