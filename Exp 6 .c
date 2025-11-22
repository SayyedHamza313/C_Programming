/*Name: Sayyed Mohammad Hamza Asif 
UIN: 251M002
Roll No:2
Class:FE Mechanical 
Div:F
*/
#include<stdio.h>

void counter() {
	static int count = 0;
	count ++;
	printf("Count = %d\n", count);
}

int main() {
	counter();
	counter();
	counter();

	return 0;
}
