#include<stdio.h>
#include<stdlib.h>
int main(){
	
	printf("\nEnter the File 1 Path ");
	char path1[100];
	scanf("%s", path1);
	printf("\nEnter the File 2 Path ");
	char path2[100];
	scanf("%s", path2);
	FILE *fp1 = fopen(path1,"r");
	FILE *fp2 = fopen(path2,"r");
	FILE *fp3 = fopen("merge.txt","w");
	if(fp1 == NULL || fp2 == NULL || fp3 == NULL)
	{
		printf("\nFiles couldn't open!");
		exit(EXIT_FAILURE);
	}

	char c;
	while((c = fgetc(fp1)) != EOF)
	{
		fputc(c, fp3);
	}
	while((c = fgetc(fp2))!= EOF){
		fputc(c,fp3);
	}
	printf("\nSuccessfully Merged !\n");
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	return 0;
}
