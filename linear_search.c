#include <stdio.h>

int main() {
    int n, key;
    printf("Enter number of elements (max 100): ");
    scanf("%d", &n);
    if(n > 100) {
        printf("Too many elements\n");
        return 1;
    }
    int arr[100];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter key to search: ");
    scanf("%d", &key);
    int found = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }
    if(!found) printf("Element not found\n");
    return 0;
}