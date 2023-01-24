#include<stdio.h>
void sort(int arr[], int n);
int main(){
	int n;
	printf("\nEnter Size : ");
	scanf("%d", &n);
	int arr[n];
	printf("\nEnter Array Elements : ");
	for(int i = 0; i < n; ++i)
		scanf("%d", &arr[i]);

	sort(arr,n);
	printf("\nThe Sorted Array - ");
	for(int *i = arr; i != arr+n; ++i)
		printf("%d ", *i);
	printf("\n");
}
void sort(int arr[], int n)
{
	//Selection Sort Implementation Using Pointers
	for(int *i = arr; i+1 != arr+n; ++i)
	{
		int *min = i;
		for(int *j = i+1; j != arr+n; ++j)
		{
			if(*min > *j){
				min = j;
			}
		}
		if(i != min){
			int temp = *i;
			*i = *min;
			*min = temp;
		}
	}
}
