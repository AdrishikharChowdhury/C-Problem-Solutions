#include<stdio.h>
#include<string.h>
main()
{
	char s1[100],s2[20],s3[20];
	printf("Enter the 1st string: ");
	gets(s1);
	printf("Enter the 2nd string: ");
	gets(s2);
	strcat(s1,s2);
	printf("The concatinated string is %s",s1);
}