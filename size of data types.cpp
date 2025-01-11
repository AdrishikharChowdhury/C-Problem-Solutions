#include <stdio.h>
int main()
{ 
  	printf("Size of different data types\n");
	printf("1.int			%2d bytes\n", sizeof(short int));
  	printf("2.long int		%2d bytes\n", sizeof(long int));
  	printf("3.float			%2d bytes\n", sizeof(float));
  	printf("4.double		%2d bytes\n", sizeof(double));
  	printf("5.long double		 %2d bytes\n", sizeof(long double));
  	printf("6.char			%2d bytes\n", sizeof(char));
  	return 0;
}