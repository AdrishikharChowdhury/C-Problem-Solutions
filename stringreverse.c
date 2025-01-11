#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#define CHUNK_SIZE 10
void reverseString(char* s, int sSize) {
    char temp;
    int left=0,right=sSize-1;
    while (left < right)
    {
        temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}
int main()
{
	char *s;
	int x,cap=CHUNK_SIZE;
	printf("Enter the string: ");
	s=(char *)malloc(cap*sizeof(char));
	gets(s);
	x=strlen(s);
	reverseString(s,x);
	printf("The reversed string is %s",s);
	return 0;
}