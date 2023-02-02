#include<stdio.h>
#include<stdlib.h>
int main(){
	int length = 0;
	char *buffer = 0;
	FILE *file = fopen("write.txt", "r");
	if(!file)
	{
		printf("\nFile Not Found");
		exit(0);
	}
	fseek(file,0,SEEK_END);
	length = ftell(file);
	fseek(file,0,SEEK_SET);
	buffer = malloc(length);
	if(buffer)
		fread(buffer, 1, length, file);
	fclose(file);
	char *rot = malloc(length);
	int start = length%13;
	int k = 0;
	for(int i = start; i < length; ++i)
		rot[i] = buffer[k++];
	for(int i = 0; i < start; ++i)
		rot[i] = buffer[k++];

	printf("%s", rot);
	return 0;
}
