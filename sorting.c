#include <stdio.h> 

void swap(int *xp, int *yp) 
{ 
	int temp = *xp; 
	*xp = *yp; 
	*yp = temp; 
} 
 
void Sort(int arr[], int n) 
{ 
int i, j; 
for (i = 0; i < n-1; i++)	 

	for (j = 0; j < n-i-1; j++) 
		if (arr[j] > arr[j+1]) 
			swap(&arr[j], &arr[j+1]); 
} 

void printArray(int arr[], int n) 
{ 
	int i; 
	for (i=0; i < n; i++) 
		printf("%d ", arr[i]); 
	printf("\n"); 
} 

int main() {
  int first;
  int i;
  scanf("%d", &first);

	int arr[first]; 
  
  arr[0] = first;
  for(i=1; i< first; i++ ){
    scanf("%d", &arr[i]);
  }

	int n = sizeof(arr)/sizeof(arr[0]); 
	Sort(arr, n); 
	printf("Sorted array: \n"); 
	printArray(arr, n); 
	return 0; 
} 
