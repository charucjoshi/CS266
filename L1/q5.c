#include<stdio.h>
int main(){
	char str[1000];
	printf("\nEnter String : ");
	scanf("%[^\n]%*c", str);
	
	int length = 0;
	for(char *it = str; *it != '\0'; ++it)
		length++;
	printf("\nLenght of '%s' = %d\n", str, length);
	return 0;
}	
