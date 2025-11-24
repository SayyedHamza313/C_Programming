/*
Name:Sayyed Mohammad Hamza Asif
UIN:251M002
Class:Mechanical FE
Div:f
*/
#include <stdio.h>
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    int *ptr = arr;
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }
    printf("Array in reverse order:\n
        printf("%d ", *(ptr + i));");
    for (int i = n - 1; i >= 0; i--) {
    }

    return 0;
}
