#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
bool guess(int,int);
int main()
{
    int lb = 1,ub = 100,i,value;
    bool ip;     
    srand(time(NULL));
    value=((rand() % (ub - lb + 1)) + lb );
    while(1)
    {
        printf("Guess a number (Enter 0 to Exit): ");
        scanf("%d",&i);
        if(i==0)
            break;
        ip=guess(i,value);
        if(ip==false)
            break;
    }
    printf("\n=====GAME OVER=====");
    return 0;
}
bool guess(int i,int target)
{
    if(i==target)
    {
        printf("You have guessed the correct number:\nAns: %d",i);
        return false;
    }
    else if(i<target)
        printf("You have entered a small number.Guess bigger number:\n");
    else
        printf("You have guessed big number.Guess smaller number:\n");
        return true;
}