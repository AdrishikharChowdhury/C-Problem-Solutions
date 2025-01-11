#include<stdio.h>
struct poke{
    int hp;
    int speed;
    int attack;
};
int main()
{
    struct poke pikachu;
    pikachu.attack=60;
    pikachu.hp=50;
    pikachu.speed=100;
    printf("%d",pikachu.attack);
    return 0;
}