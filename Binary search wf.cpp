#include <stdio.h>
main()
{
    int arr[6],target,low=0,high=5,mid,found=0,i,j,t;
    printf("Enter your elements:\n");
    for(i=0;i<6;i++)
    {
    	scanf("%d",&arr[i]);
	}
	for(i=0;i<6;i++)
	{
		for(j=0;j<5-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
	}
	printf("\nAfter sorting the elements are:\n");
	for(i=0;i<6;i++)
    {
    	printf("%d ",arr[i]);
	}
	printf("\nEnter the element you want to find: ");
	scanf("%d",&target);
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (arr[mid] == target)
		{
            found = 1;
            break;
        }
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (found==1) {
        printf("Element found at position %d\n", ++mid);
    } else {
        printf("Element not found in the array\n");
    }

    return 0;
}
