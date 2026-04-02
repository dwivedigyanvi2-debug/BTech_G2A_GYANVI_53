#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int original = num, rev = 0, temp = num;
    while(temp != 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    if(original == rev) printf("Palindrome\n");
    else printf("Not a palindrome\n");
    return 0;
}