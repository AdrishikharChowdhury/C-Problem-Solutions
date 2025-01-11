 #include<stdio.h>
 main()
 {
 	int a[6],val,i,j;
 	printf("Enter your elements:\n");
 	for(i=0;i<=5;i++)
 	{
 		scanf("%d",&a[i]);
	}
	printf("Enter the position you want to delete: ");
	scanf("%d",&j);
	val=a[j-1];
  	for(i=j-1;i<=5;i++)
 	{
 		a[i]=a[i+1];
	}
	printf("After deleting %d the values are:\n",val);
	for(i=0;i<=4;i++)
 	{
 		printf("%d ",a[i]);
	}
}