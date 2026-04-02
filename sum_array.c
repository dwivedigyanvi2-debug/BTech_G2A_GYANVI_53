#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements (max 100): ");
    scanf("%d", &n);
    if(n > 100) {
        printf("Too many elements\n");
        return 1;
    }
    int arr[100];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    int sum = 0;
    for(int i = 0; i < n; i++) sum += arr[i];
    printf("Sum: %d\n", sum);
    return 0;
}