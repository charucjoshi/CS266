#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	FILE *file_pointer;	
	char path[100];

	char inp;
	int n_char = 0, n_words = 0;
	printf("\nEnter File Path : ");
	scanf("%s", path);
	file_pointer = fopen(path, "r");
	if(file_pointer == NULL){
		printf("\nFile Not Found!");
		exit(EXIT_FAILURE);
	}
	while((inp = fgetc(file_pointer))!= EOF){
		n_char++;
		if(inp == ' ' || inp == '\0' || inp == '\n' || inp == '\t')
			n_words++;
	}
	fclose(file_pointer);
	printf("\nNumber of Character = %d", n_char);
	printf("\nNumber of Words = %d\n", n_words);
	return 0;
}
