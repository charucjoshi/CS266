#include<stdio.h>
int main(){
	int a = 3;
	int *a_p = &a;
	char b = 'c';
	char *b_p = &b;
	char *str = "Charu";
	char* *p = &str;
	printf("\nAddress of Integer Pointer : %p", a_p);
	printf("\nAddress of Character Pointer : %p", b_p);
	printf("\nAddress of String Pointer : %p\n", p);
	return 0;
}
