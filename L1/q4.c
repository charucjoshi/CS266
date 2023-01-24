#include<stdio.h>
int main(){
	int n;
	printf("\nEnter n : ");
	scanf("%d", &n);
	int arr[n];
	printf("\nEnter elements in array : ");
	for(int i = 0; i < n; ++i){
		scanf("%d", &arr[i]);
	}

	printf("\nThe array elements are : ");
	for(int *it = arr; it != arr+n; ++it)
		printf("%d ", *it);
	printf("\n");
	return 0;
}

