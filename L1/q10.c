#include<stdio.h>
int main(int argc, char* argv[]){
	if(argc == 1) return 0;
	printf("\nNumber of Arguments = %d\n", argc-1);
	for(int i = 1; i < argc; ++i)
		if(argv[i][0] != '-')
		printf("%s\n", argv[i]);
	return 0;
}

