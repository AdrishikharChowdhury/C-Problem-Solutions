#include<stdio.h>
#include<string.h>
char mname[100];
char middle();
char convert(char);
int main()
{
	int i,choice=0;
	char fname[100],sname[100];
	printf("Enter your first name\n");
	gets(fname);
	fname[0]=convert(fname[0]);
	middle();
	printf("Enter your surname\n");
	scanf("%s",sname);
	sname[0]=convert(sname[0]);
	printf("Your abbreviated name is %c.%c.%s\n",fname[0],mname[0],sname);
	return 0;
}
char middle()
{
	int choice;
	printf("Do you have middle name?\n1.Yes\n2.No\n");
	scanf("%d",&choice);
	if(choice==1)
	{
		printf("Enter your middle name\n");
		scanf("%s",mname);
		mname[0]=convert(mname[0]);
	}
	else if(choice==2)
		return 0;
	else
	{
		printf("Try again\n");
		middle();
	}
	return 0;
}
char convert(char letter)
{
	if(letter>=97 && letter<=122)
		letter=letter-32;
	return letter;
}