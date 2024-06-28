#include<stdio.h>
void chartri1(int);
void chartri2(int);
void chartri3(int);
void chartri4(int);
void chartri5(int);
void chartri6(int);
void chartri7(int);
void chartri8(int);
void chartri9(int);
void chartri10(int);
void chartri11(int);
void chartri12(int);
void chartri13(int);
void chartri14(int);
void chartri15(int);
void chartri16(int);
void charpyr1(int);
void charpyr2(int);
void charpyr3(int);
void charpyr4(int);
void charpyr5(int);
void charpyr6(int);
void charpyr7(int);
void charpyr8(int);
void charpyr9(int);
void charpyr10(int);
void charpyr11(int);
void charpyr12(int);
void charpyr13(int);
void charpyr14(int);
void charpyr15(int);
void charpyr16(int);
void menu(int);
main()
{
	int m,n;
	printf("Enter the no. of rows: ");
	scanf("%d",&m);
	menu(m);
}
void menu(int m)
{
	int ch1,ch2,a,b;
	do
	{
		a=1;
		printf("Select your pattern to print: \n1.Character Triangle\n2.Character Pyramid\n3.Exit\nYour choice: ");
		scanf("%d",&ch1);
		switch(ch1)
		{
			case 1:
				do
				{
					b=1;
					printf("What type of style do you want?\n1.Style 1\n2.Style 2\n3.Style 3\n4.Style 4\n5.Style 5\n6.Style 6\n7.Style 7\n8.Style 8\n9.Style 9\n10.Style 10\n11.Style 11\n12.Style 12\n13.Style 13\n14.Style 14\n15.Style 15\n16.Style 16\n17.Exit\nEnter choice: ");
					scanf("%d",&ch2);
					switch(ch2)
					{
						case 1:
							printf("The pattern you desired is printed below:\n");
							chartri1(m);
							break;
						case 2:
							printf("The pattern you desired is printed below:\n");
							chartri2(m);
							break;
						case 3:
							printf("The pattern you desired is printed below:\n");
							chartri3(m);
							break;
						case 4:
							printf("The pattern you desired is printed below:\n");
							chartri4(m);
							break;
						case 5:
							printf("The pattern you desired is printed below:\n");
							chartri5(m);
							break;
						case 6:
							printf("The pattern you desired is printed below:\n");
							chartri6(m);
							break;
						case 7:
							printf("The pattern you desired is printed below:\n");
							chartri7(m);
							break;
						case 8:
							printf("The pattern you desired is printed below:\n");
							chartri8(m);
							break;
						case 9:
							printf("The pattern you desired is printed below:\n");
							chartri9(m);
							break;
						case 10:
							printf("The pattern you desired is printed below:\n");
							chartri10(m);
							break;
						case 11:
							printf("The pattern you desired is printed below:\n");
							chartri11(m);
							break;
						case 12:
							printf("The pattern you desired is printed below:\n");
							chartri12(m);
							break;
						case 13:
							printf("The pattern you desired is printed below:\n");
							chartri13(m);
							break;
						case 14:
							printf("The pattern you desired is printed below:\n");
							chartri14(m);
							break;
						case 15:
							printf("The pattern you desired is printed below:\n");
							chartri15(m);
							break;
						case 16:
							printf("The pattern you desired is printed below:\n");
							chartri16(m);
							break;
						case 17:
							b=0;
							printf("End of character triangle.....\n");
							break;
						default:
							printf("Wrong Input try again!!!\n");					
					}
				}while(b);
			break;
			case 2:
				do
				{
					b=1;
					printf("What type of style do you want?\n1.Style 1\n2.Style 2\n3.Style 3\n4.Style 4\n5.Style 5\n6.Style 6\n7.Style 7\n8.Style 8\n9.Style 9\n10.Style 10\n11.Style 11\n12.Style 12\n13.Style 13\n14.Style 14\n15.Style 15\n16.Style 16\n17.Exit\nEnter choice: ");
					scanf("%d",&ch2);
					switch(ch2)
					{
						case 1:
							printf("The pattern you desired is printed below:\n");
							charpyr1(m);
							break;
						case 2:
							printf("The pattern you desired is printed below:\n");
							charpyr2(m);
							break;
						case 3:
							printf("The pattern you desired is printed below:\n");
							charpyr3(m);
							break;
						case 4:
							printf("The pattern you desired is printed below:\n");
							charpyr4(m);
							break;
						case 5:
							printf("The pattern you desired is printed below:\n");
							charpyr5(m);
							break;
						case 6:
							printf("The pattern you desired is printed below:\n");
							charpyr6(m);
							break;
						case 7:
							printf("The pattern you desired is printed below:\n");
							charpyr7(m);
							break;
						case 8:
							printf("The pattern you desired is printed below:\n");
							charpyr8(m);
							break;
						case 9:
							printf("The pattern you desired is printed below:\n");
							charpyr9(m);
							break;
						case 10:
							printf("The pattern you desired is printed below:\n");
							charpyr10(m);
							break;
						case 11:
							printf("The pattern you desired is printed below:\n");
							charpyr11(m);
							break;
						case 12:
							printf("The pattern you desired is printed below:\n");
							charpyr12(m);
							break;
						case 13:
							printf("The pattern you desired is printed below:\n");
							charpyr13(m);
							break;
						case 14:
							printf("The pattern you desired is printed below:\n");
							charpyr14(m);
							break;
						case 15:
							printf("The pattern you desired is printed below:\n");
							charpyr15(m);
							break;
						case 16:
							printf("The pattern you desired is printed below:\n");
							charpyr16(m);
							break;
						case 17:	
							b=0;
							printf("End of character pyramid.....\n");
							break;
						default:
							printf("Wrong Input try again!!!\n");					
					}
				}while(b);
			break;
			case 3:
				a=0;
				printf("Thank you for using this program.....\n");
				break;
			default:
				printf("Wrong Input try again!!!\n");
		}
	}while(a);
}
void charpyr2(int m)
{
	int i,j,k;
	char s;
	for(i=1;i<=m;i++)
	{
		s='A';
		for(k=1;k<=m-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("%c",s);
			s++;
		}
		printf("\n");
	}
}
void charpyr3(int m)
{
	int i,j,k;
	char s='A';
	for(i=1;i<=m;i++)
	{
		for(k=1;k<=m-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("%c",s);
			s++;
		}
		printf("\n");
	}
}
void charpyr11(int m)
{
	int i,j,k;
	char s='A';
	for(i=m;i>=0;i--)
	{
		for(k=1;k<=m-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("%c",s);
			s++;
		}
		printf("\n");
	}
}
void charpyr4(int m)
{
	int i,j,k;
	char s;
	for(i=1;i<=m;i++)
	{
		s='B';
		for(k=1;k<=m-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("%c",s);
			s=s+2;
		}
		printf("\n");
	}
}
void charpyr12(int m)
{
	int i,j,k;
	char s;
	for(i=m;i>=0;i--)
	{
		s='B';
		for(k=1;k<=m-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("%c",s);
			s=s+2;
		}
		printf("\n");
	}
}
void charpyr5(int m)
{
	int i,j,k;
	char s;
	for(i=1;i<=m;i++)
	{
		s='A';
		for(k=1;k<=m-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("%c",s);
			s=s+2;
		}
		printf("\n");
	}
}
void charpyr13(int m)
{
	int i,j,k;
	char s;
	for(i=m;i>=0;i--)
	{
		s='A';
		for(k=1;k<=m-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("%c",s);
			s=s+2;
		}
		printf("\n");
	}
}
void charpyr6(int m)
{
	int i,j,k;
	char s;
	for(i=1;i<=m;i++)
	{
		s='B';
		for(k=1;k<=m-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			if(j>=i)
			{
				printf("%c",s);
				s=s-2;
			}
			else
			{
				printf("%c",s);
				s=s+2;
			}
		}
		printf("\n");
	}
}
void charpyr14(int m)
{
	int i,j,k;
	char s;
	for(i=m;i>=0;i--)
	{
		s='B';
		for(k=1;k<=m-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			if(j>=i)
			{
				printf("%c",s);
				s=s-2;
			}
			else
			{
				printf("%c",s);
				s=s+2;
			}
		}
		printf("\n");
	}
}
void charpyr7(int m)
{
	int i,j,k;
	char s;
	for(i=1;i<=m;i++)
	{
		s='A';
		for(k=1;k<=m-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			if(j>=i)
			{
				printf("%c",s);
				s=s-2;
			}
			else
			{
				printf("%c",s);
				s=s+2;
			}
		}
		printf("\n");
	}
}
void charpyr15(int m)
{
	int i,j,k;
	char s;
	for(i=1;i<=m;i++)
	{
		s='A';
		for(k=1;k<=m-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			if(j>=i)
			{
				printf("%c",s);
				s=s-2;
			}
			else
			{
				printf("%c",s);
				s=s+2;
			}
		}
		printf("\n");
	}
}
void charpyr8(int m)
{
	int i,j,k;
	char s;
	for(i=1;i<=m;i++)
	{
		s='A'+i-1;
		for(k=1;k<=m-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("%c",s);
		}
		printf("\n");
	}
}
void charpyr16(int m)
{
	int i,j,k;
	char s;
	for(i=m;i>=0;i--)
	{
		s='A'+i-1;
		for(k=1;k<=m-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("%c",s);
		}
		printf("\n");
	}
}
void charpyr9(int m)
{
	int i,j,k;
	char s;
	for(i=m;i>=0;i--)
	{
		s='A';
		for(k=1;k<=m-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			if(j>=i)
			{
				printf("%c",s);
				s--;
			}
			else
			{
				printf("%c",s);
				s++;
			}
		}
		printf("\n");
	}
}
void charpyr10(int m)
{
	int i,j,k;
	char s;
	for(i=m;i>=0;i--)
	{
		s='A';
		for(k=1;k<=m-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("%c",s);
			s++;
		}
		printf("\n");
	}
}
void charpyr1(int m)
{
	int i,j,k;
	char s;
	for(i=1;i<=m;i++)
	{
		s='A';
		for(k=1;k<=m-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			if(j>=i)
			{
				printf("%c",s);
				s--;
			}
			else
			{
				printf("%c",s);
				s++;
			}
		}
		printf("\n");
	}
}
void chartri1(int m)
{
	int i,j;
	char s;
	for(i=1;i<=m;i++)
	{
		s='A';
		for(j=1;j<=i;j++)
		{
			printf("%c",s);
			s++;
		}
		printf("\n");
	}
}
void chartri4(int m)
{
	int i,j;
	char s;
	for(i=m;i>=0;i--)
	{
		s='A';
		for(j=1;j<=i;j++)
		{
			printf("%c",s);
			s++;
		}
		printf("\n");
	}
}
void chartri2(int m)
{
	int i,j;
	char s='A';
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",s);
			s++;
		}
		printf("\n");
	}
}
void chartri5(int m)
{
	int i,j;
	char s='A';
	for(i=m;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",s);
			s++;
		}
		printf("\n");
	}
}
void chartri6(int m)
{
	int i,j;
	char s;
	for(i=m;i>=1;i--)
	{
		s='B';
		for(j=1;j<=i;j++)
		{
			printf("%c",s);
			s=s+2;
		}
		printf("\n");
	}
}
void chartri3(int m)
{
	int i,j;
	char s;
	for(i=1;i<=m;i++)
	{
		s='B';
		for(j=1;j<=i;j++)
		{
			printf("%c",s);
			s=s+2;
		}
		printf("\n");
	}
}
void chartri7(int m)
{
	int i,j;
	char s;
	for(i=1;i<=m;i++)
	{
		s='A';
		for(j=1;j<=i;j++)
		{
			printf("%c",s);
			s=s+2;
		}
		printf("\n");
	}
}
void chartri8(int m)
{
	int i,j;
	char s;
	for(i=m;i>=1;i--)
	{
		s='A';
		for(j=1;j<=i;j++)
		{
			printf("%c",s);
			s=s+2;
		}
		printf("\n");
	}
}
void chartri9(int m)
{
	int i,j,k;
	char s='A';
	for(i=1;i<=m;i++)
	{
		s='A';
		for(k=0;k<=m-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%c",s);
			s++;
		}
		printf("\n");
	}
}
void chartri10(int m)
{
	int i,j,k;
	char s='A';
	for(i=1;i<=m;i++)
	{
		for(k=0;k<=m-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%c",s);
			s++;
		}
		printf("\n");
	}
}
void chartri13(int m)
{
	int i,j,k;
	char s;
	for(i=1;i<=m;i++)
	{
		s='B';
		for(k=0;k<=m-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%c",s);
			s=s+2;
		}
		printf("\n");
	}
}
void chartri12(int m)
{
	int i,j,k;
	char s='A';
	for(i=m;i>=0;i--)
	{
		for(k=0;k<=m-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%c",s);
			s++;
		}
		printf("\n");
	}
}
void chartri11(int m)
{
	int i,j,k;
	char s;
	for(i=m;i>=0;i--)
	{
		s='A';
		for(k=0;k<=m-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%c",s);
			s++;
		}
		printf("\n");
	}
}
void chartri14(int m)
{
	int i,j,k;
	char s;
	for(i=m;i>=0;i--)
	{
		s='A';
		for(k=0;k<=m-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%c",s);
			s=s+2;
		}
		printf("\n");
	}
}
void chartri15(int m)
{
	int i,j,k;
	char s;
	for(i=1;i<=m;i++)
	{
		s='A';
		for(k=0;k<=m-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%c",s);
			s=s+2;
		}
		printf("\n");
	}
}
void chartri16(int m)
{
	int i,j,k;
	char s;
	for(i=m;i>=0;i--)
	{
		s='A';
		for(k=0;k<=m-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%c",s);
			s=s+2;
		}
		printf("\n");
	}
}