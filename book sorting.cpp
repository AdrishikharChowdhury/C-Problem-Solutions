#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
typedef struct book
{
	char name[100];
	float price;
	int page;
}book;
void swap(book *,book *);
void showstruct(book *,int );
main()
{
	book *a;
	int p,i,j,k,ch;
	printf("Enter the no. of books: ");
	scanf("%d",&p);
	a=(book *)malloc(p*sizeof(book));
	for(i=0;i<p;i++)
	{
		printf("Enter the book name, price of the book and no. of pages using space: ");
		scanf("%s %f %d",a[i].name,&a[i].price,&a[i].page);
	}
	printf("Before sorting....\nThe details are shown below:\nName\t\tPrice\t\tPages\n");
	showstruct(a,p);
	do
	{
		k=1;
		printf("\nWhat do you want to perform\n1.Sort By Name\n2.Sort By Price\n3.Sort By No. of pages\n4.Exit\nYour choice: ");
		scanf("%d",&k);
		switch(k)
		{
			case 1:
				for (i=0;i<p;i++)
				{
       				for (j=0;j<p-1-i;j++) 
					{
    		    		if (a[j].name[0]>a[j+1].name[0])
						{
    	    			    swap(&a[j],&a[j+1]);
    		   			}
    				}
    			}
    			printf("After sorting......\nThe details are shown below:\nName\t\tPrice\t\tPages\n");
				showstruct(a,p);
				break;
			case 2:
				for (i=0;i<p;i++)
				{
		        	for (j=0;j<p-1-i;j++) 
					{
    	        		if (a[j].price>a[j+1].price) 
						{
            			    swap(&a[j],&a[j+1]);
		    	   		}
        			}
    			}
    			printf("After sorting......\nThe details are shown below:\nName\t\tPrice\t\tPages\n");
				showstruct(a,p);
				break;
			case 3:
				for (i=0;i<p;i++)
				{
		        	for (j=0;j<p-1-i;j++) 
					{
    	        		if (a[j].page>a[j+1].page) 
						{
            			    swap(&a[j],&a[j+1]);
		    	   		}
        			}
    			}
    			printf("After sorting......\nThe details are shown below:\nName\t\tPrice\t\tPages\n");
				showstruct(a,p);
				break;
			case 4:
				k=0;
				break;
		}	
	}while(k);
	printf("Program Terminated.....\n");
}
void swap(book *a,book *b)
{
    book temp = *a;
    *a = *b;
    *b = temp;
}
void showstruct(book *b, int r)
{
	int i;
	for(i=0;i<r;i++)
	{
		printf("%s\t\t%0.2f\t\t%d\n",b[i].name,b[i].price,b[i].page);
	}
}