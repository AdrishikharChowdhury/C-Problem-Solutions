#include<stdio.h>
#include<stdlib.h>

int partition(int*, int ,int);
int* quick_sort(int *,int,int);

int partition(int* arr, int low,int high){
	
	int pivot = arr[high];
	int i,j,t;
	i= low-1;
	for(j= low;j<=high-1;j++) // added high-1
	{
		if(arr[j] <= pivot){
			i++;
			t=arr[i];
			arr[i]= arr[j];
			arr[j]= t;
		}
	}
	// the swap of arr[i+1] and arr[high] is outside the loop
	t= arr[i+1];
	arr[i+1]= arr[high]; 
	arr[high] = t;
	//replaced pivot with arr[high]
	return i+1;
}

int *quick_sort(int *arr,int low,int high)
{
	int pivotind;
	if(low < high)
	{
		pivotind = partition(arr,low,high);
		//Replaced partition with quick_sort for recursion
		arr = quick_sort(arr,low,pivotind-1);
		arr = quick_sort(arr,pivotind+1, high);
	}
	return arr;
}
//Made it more readable
int main()
{
	int *arr,i,j,n,k;
	printf("Enter the number of elements you want to insert: ");
	scanf("%d",&n);
	arr=(int*)malloc(n*sizeof(int));
	printf("Enter elements:\n");
	for(i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
	printf("\nInput elements are:\n");
	for(j=0;j<n;j++){
			printf("%d\t",arr[j]);	
		}
		arr=quick_sort(arr,0,n-1);
		
	printf("\nAfter sorting the elements are:\n");
	for(k=0;k<n;k++)
	{
		printf("%d\t",arr[k]);
	}
	return 0; //Added return 0
}