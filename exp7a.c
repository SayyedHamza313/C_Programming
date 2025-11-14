/*Name: Sayyed Mohammad Hammza Asif
Roll No:2 
Uin : 251M002
Div :F 
*/
#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0];

    for (i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf(" The Largest element is: %d", largest);

    return 0;
}
