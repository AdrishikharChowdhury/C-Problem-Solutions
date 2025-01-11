#include<stdio.h>
#include<math.h>

int main(void)
{ 
    double input, result,res;
    int input_ok = 0;
    while(input_ok == 0)
    {
        printf("Enter Input:");
        scanf("%lf", &input);
        if(input <= 1 && input >=0)
        {
            input_ok = 1;
        }
        else{
            printf("Wrong Input %lf\n\n", input);
        }
    }
    result = sin(input);
    res=cos(input);
    printf("sin(%lf) = %lf\n\n", input, result );
    printf("cos(%lf) = %lf\n\n", input, res );
    return 0;
}