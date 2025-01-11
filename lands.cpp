#include <stdio.h>
main()
{
    int a,b,c,l,s;
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);
    l = a;
    s = a;
    if (b > l)
        l = b;
    else if (b < s)
        s = b;
    if (c > l)
        l = c;
    else if (c < s) 
        s = c;
    printf("%d largest number\n", l);
    printf("%d is smallest number\n", s);
    return 0;
}
