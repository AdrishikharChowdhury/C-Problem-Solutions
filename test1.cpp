#include<stdio.h>
int main()
{
   int a = 2, b = 5, c = 8;

   printf("  a && b  = %d \n ",  a && b);
   printf(" b %% a   = %d \n ", b % a );  
   printf(" a / b    = %d \n " , a/b); 
   printf(" 2 * a + 1 < b = %d \n ", 2*a + 1 < b);  
   printf(" b <= c = %d \n "  , b<= c);
   printf(" !!c = %d \n " , !!c); 
   printf(" c > 2 && a > 6 = %d \n " , c> 2 && a > 6); 
   printf(" b == 2||a != 4 = %d \n ", b == 2 || a != 4 );
   printf(" (a + b) * c-- = %d \n ",  (a + b) * c-- );
   printf(" c = ++b = %d \n ",c = ++b);  
   return 0;
}