#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
	char stream[1111111];
	int count = 0;
	printf("\nEnter the input stream : ");
	scanf("%[^\n]%*c", stream);
	for(int i = 0; stream[i] != '\0'; ++i)
		if(!isalpha(stream[i])) count++;
	printf("\nNumber of Non Alphabetic Characters : %d\n", count);

	FILE *file = fopen("write.txt", "w");
	if(file == NULL)
	{
		printf("\nFile Not Found!");
		exit(EXIT_FAILURE);
	}
	for(int i = 0; stream[i] != '\0'; ++i)
		if(isalnum(stream[i]))
			fputc(stream[i], file);
	fclose(file);
	printf("\nSuccesfully Written on File write.txt\n");
	return 0;
}
