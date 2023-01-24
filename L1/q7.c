#include<stdio.h>
#include<string.h>
int main(){
	
	FILE *file_pointer; // Declares the file pointer

	char info[1000] = "My name is Charu Chandra Joshi. Do I have social anxiety or am I just a bit too self conscious. FML";
	file_pointer = fopen("input.txt", "w");
	if(file_pointer == NULL)
		printf("\nError !");
	else{
		printf("\ninput.txt is opened.");
		if(strlen(info) > 0)
		{
			fputs(info,file_pointer);
			fputs("\n", file_pointer);
		}
		fclose(file_pointer); // File is closed this way : fclose(file_pointer)

		printf("\nSuccessfully Created and Stored Information\n");
	}
	return 0;
}

