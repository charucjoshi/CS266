#include<stdio.h>
int main(){
	int first, second, *p_first, *p_second;
	printf("\nEnter the 2 numbers : ");
	scanf("%d %d", &first, &second);
	p_first = &first;
	p_second = &second;
	int greater = (*p_first > *p_second ? *p_first : *p_second);
	printf("\nThe greater number is : %d\n", greater);
	return 0;
}
