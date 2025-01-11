#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
main()
{
	char *s1,*s2;
	int cap=1,cap1=1;
	printf("Enter 1st string: ");
	s1=(char *)malloc(sizeof(char)*cap);
	gets(s1);
	printf("Enter 2nd string: ");
	s2=(char *)malloc(sizeof(char)*cap);
	gets(s2);
	strcat(s1,s2);
	printf("The new string is %s",s1);
}