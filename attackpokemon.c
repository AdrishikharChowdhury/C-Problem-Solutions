#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<conio.h>
#define MAX_NAME_LENGTH 50
typedef struct pokemon {
    char *attribute;
    char *name;
    int hp;
    int attack;
    int defense;
    int speed;
} pokemon;
int playerch(pokemon *p1)
{
	int ch;
	do
	{
		printf("What pokemon will you choose first?\n1. %s\n2. %s\n3. %s\nYour Choice: ",p1[0].name,p1[1].name,p1[2].name);
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				if(p1[0].hp!=0)
				return 0;
				else{
					printf("%s has fainted. It can't go into the battle. Choose another pokemon.....\n",p1[0].name);
					getch();
					continue;
				}
				break;
			case 2:
				if(p1[1].hp!=0)
				return 1;
				else{
					printf("%s has fainted. It can't go into the battle. Choose another pokemon.....\n",p1[1].name);
					getch();
					continue;
				}
				break;
			case 3:
				if(p1[2].hp!=0)
				return 2;
				else{
					printf("%s has fainted. It can't go into the battle. Choose another pokemon.....\n",p1[0].name);
					getch();
					continue;
				}
				break;
			default:
				printf("Invalid Inpuut\n");
				continue;
				getch();
		}
	}while(1);
}
void attack(pokemon *p,pokemon *c)
{
    int ch,defense=0;
    do {
        printf("Choose move (1-4):\n1. Primary Attack \t \t 2. Secondary Attack\n3. Leer \t\t\t 4. Block\nYour move: ");
        if (scanf("%d", &ch) != 1) {
            while (getchar() != '\n');
            printf("Invalid input. Please enter a number.\n");
            continue;
        }
        int damage = 0;
        switch(ch) {
            case 1:
            case 2:
                damage = (ch == 1) ? p->attack / 2 : p->attack / 4;
                if(p->defense <= 0) {
                    p->hp -= (ch == 1) ? p->attack : p->attack / 2;
                    damage = (ch == 1) ? p->attack : p->attack / 2;
                    p->defense = 0;
                } else {
                    p->hp -= damage;
                    p->defense -= damage;
                }
                printf("%s was hit by %s attack. Lost %d HP.\n", p->name, (ch == 1) ? "primary" : "secondary", damage);
                break;
            case 3:
                p->speed -= p->attack / 2;
                printf("%s's speed was reduced by Leer.\n", p->name);
                break;
            case 4:
                defense= c->attack / 2;
                c->defense += defense;
                printf("%s blocked. Defense increased by %d.\n", c->name, defense);
                break;
            default:
                printf("Invalid Input\n");
                continue;
        }
        printf("Press Any Key to continue....\n");
        getch();
        return;
    } while (1);
}
void H2H1(pokemon *p1, pokemon *p2,int x,int y)
{
    int i=0,j=0;
    do
	{
	    if(p1[x].speed > p2[y].speed)
	    {
	        printf("1st player turn:\n");
	        attack(&p2[y],&p1[x]);
	        if(p2[y].hp <= 0)
	        {
	            printf("%s fainted. Press Any Key to continue....\n", p2[y].name);
				getch();
	            j++;
	            if(j == 3)
	            {
	                printf("Player 1 wins!\n");
	                break;
	            }
				y=playerch(p2);
	            printf("Go %s. Press Any Key to continue....\n", p2[y].name);
	            getch();
	            continue;
	        }
	        printf("2nd player turn:\n");
	        attack(&p1[x],&p2[y]);
	        if(p1[i].hp <= 0)
	        {
	            printf("%s fainted. Press Any Key to continue....\n", p1[x].name);
				getch();
	            i++;
	            if(i == 3)
	            {
	                printf("Player 2 wins!\n");
	                break;
	            }
				x=playerch(p1);
	            printf("Go %s. Press Any Key to continue....\n", p1[x].name);
	            getch();
	            continue;
	        }
	    }
	    else {
	        printf("2nd player turn:\n");
	        attack(&p1[x],&p2[y]);
	        if(p1[i].hp <= 0)
	        {
	            printf("%s fainted. Press Any Key to continue....\n", p1[x].name);
				getch();
	            i++;
	            if(i == 3)
	            {
	                printf("Player 2 wins!\n");
	                break;
	            }
				x=playerch(p1);
	            printf("Go %s. Press Any Key to continue....\n", p1[x].name);
	            getch();
	            continue;
	        }
	        printf("1st player turn:\n");
	        attack(&p2[y],&p1[x]);
	        if(p2[y].hp <= 0)
	        {
	            printf("%s fainted. Press Any Key to continue....\n", p2[y].name);
	            getch();
	            j++;
	            if(j == 3)
	            {
	                printf("Player 1 wins!\n");
	                break;
	            }
				y=playerch(p2);
	            printf("Go %s. Press Any Key to continue....\n", p2[y].name);
	            getch();
	            continue;
	        }
	    }
	    printf("%s stats\n", p1[x].name);
	    printf("Attack: %d \t \t HP: %d\nDefense: %d \t \t Speed: %d\n", p1[x].attack, p1[x].hp, p1[x].defense, p1[x].speed);
	    printf("Press Any Key to continue....\n");
	    getch();
	    printf("%s stats\n", p2[y].name);
	    printf("Attack: %d \t \t HP: %d\nDefense: %d \t \t Speed: %d\n", p2[y].attack, p2[y].hp, p2[y].defense, p2[y].speed);
	    printf("Press Any Key to continue....\n");
	    getch();
	} while(1);
}
int main()
{
    int i,j,a,b;
    pokemon *p1 = malloc(3 * sizeof(pokemon));
    pokemon *p2 = malloc(3 * sizeof(pokemon));    
    if (p1 == NULL || p2 == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    for(i = 0; i < 3; i++)
    {
        p1[i].hp = 200;
        p1[i].attack = 50;
        p1[i].defense = 100;
        p2[i].hp = 200;
        p2[i].attack = 50;
        p2[i].defense = 100;
        p1[i].speed = 117;
        p2[i].speed = 94;
    }
	for (i = 0; i < 3; i++)
	{
		p1[i].name = malloc(MAX_NAME_LENGTH * sizeof(char));
		if (p1[i].name == NULL) {
			printf("Memory allocation failed\n");
			// Handle the error (e.g., free previously allocated memory and exit)
			exit(1);
		}
		printf("Enter Pokemon no. %d: ", i + 1);
		scanf("%49s", p1[i].name);
		// Clear the input buffer
		while (getchar() != '\n');
	}
	for (i = 0; i < 3; i++)
	{
		p2[i].name = malloc(MAX_NAME_LENGTH * sizeof(char));
		if (p2[i].name == NULL) {
			printf("Memory allocation failed\n");
			// Handle the error (e.g., free previously allocated memory and exit)
			exit(1);
		}
		printf("Enter Pokemon no. %d: ", i + 1);
		scanf("%49s", p2[i].name);
		// Clear the input buffer
		while (getchar() != '\n');
	}
	a=playerch(p1);
	b=playerch(p2);
    H2H1(p1,p2,a,b);
    for(i = 0; i < 3; i++)
    {
        free(p1[i].name);
        free(p2[i].name);
    }
    free(p1);
    free(p2);
    return 0;
}