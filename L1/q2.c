#include<stdio.h>
int main(){
	printf("\nEnter the I Integer : ");
	int first, *p_first;
	scanf("%d",&first);
	printf("\nEnter the II Integer : ");
	int second, *p_second;
	scanf("%d",&second);
	int sum;
       	p_first = &first;
	p_second = &second;
	sum = *p_first + *p_second;
	printf("\nSum = %d\n", sum);
	return 0;
}

