#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include<conio.h>
typedef struct pokemon {
    char *attribute;
    char *name;
    int hp;
    int attack;
    int defense;
    int speed;
} pokemon;
void sentenceCase(char *name)
{
	int i,num,sum=0;
    int n=strlen(name);
    name[0] = toupper(name[0]);
    for (i = 1; i < n; i++) 
    {
        name[i] = tolower(name[i]);
    }
}
void stadium(char *a,char *b)
{
	printf("================================================================================================");
	printf("\n\n\t \tBattle Stadium\n\n\n");
    printf(" \t \t %s\n\n",a);
    printf("            +------------------+\n");
    printf("            |                  |\n");
    printf("            |    +--------+    |\n");
    printf("            |    |        |    |\n");
    printf("            |    |        |    |\n");
    printf("            |    |        |    |\n");
    printf("            |    |   ()   |    |\n");
    printf("            |    |  (  )  |    |\n");
    printf("            |    | ( () ) |    |\n");
    printf("            |    |  (  )  |    |\n");
    printf("            |    |   ()   |    |\n");
    printf("            |    |        |    |\n");
    printf("            |    |        |    |\n");
    printf("            |    |        |    |\n");
    printf("            |    +--------+    |\n");
    printf("            |                  |\n");
    printf("            +------------------+\n");
    printf("\n\n \t \t %s\n\n",b);
    printf("================================================================================================");
}
int playerch(pokemon *p1)
{
	int ch;
	do
	{
		ch=0;
		printf("\n================================================================================================\n\n");
		printf("What pokemon will you choose first?\n1. %s\n2. %s\n3. %s\nChoose your pokemon: ",p1[0].name,p1[1].name,p1[2].name);
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
void battlestadium(pokemon *p1,pokemon *p2,int i,int j)
{
    printf("\n\n%s stats\nHP: %d \t \t Attack: %d\nDefense: %d \t \t Speed: %d\n",p1[i].name,p1[i].hp, p1[i].attack, p1[i].defense, p1[i].speed);
	stadium(p1[i].name,p2[j].name);
    printf("\n\n%s stats\nHP: %d \t \t Attack: %d\nDefense: %d \t \t Speed: %d\n",p2[j].name,p2[j].hp, p2[j].attack, p2[j].defense, p2[j].speed);
    printf("Press Any Key to continue....\n");
    getch();
}
void attack(pokemon *p,pokemon *c)
{
    int ch,defense=0;
    do {
    	printf("\n================================================================================================\n\n");
        printf("Choose move (1-4):\n1. Primary Attack \t \t 2. Secondary Attack\n3. Leer \t\t\t 4. Defense\nYour move: ");
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
                    if(p->defense <= 0)
                    p->defense=0;
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
        printf("\n================================================================================================\n\n");
        getch();
        return;
    } while (1);
}
void H2H1(pokemon *p1, pokemon *p2,char *s1,char *s2,int x,int y)
{
    int i=0,j=0;
    do
	{
	    if(p1[x].speed > p2[y].speed)
	    {
	        printf("\n\n%s's turn:\n",s1);
	        attack(&p2[y],&p1[x]);
	        if(p2[y].hp <= 0)
	        {
	            printf("%s fainted. Press Any Key to continue....\n", p2[y].name);
				getch();
	            j++;
	            if(j == 3)
	            {
	                printf("%s wins!\n",s1);
	                break;
	            }
				y=playerch(p2);
	            printf("Go %s. Press Any Key to continue....\n", p2[y].name);
	            getch();
	            continue;
	        }
	        printf("\n\n%s's turn:\n",s2);
	        attack(&p1[x],&p2[y]);
	        if(p1[x].hp <= 0)
	        {
	            printf("%s fainted. Press Any Key to continue....\n", p1[x].name);
				getch();
	            i++;
	            if(i == 3)
	            {
	                printf("%s wins!\n",s2);
	                break;
	            }
				x=playerch(p1);
	            printf("Go %s. Press Any Key to continue....\n", p1[x].name);
	            getch();
	            continue;
	        }
	    }
	    else {
	        printf("\n\n%s's turn:\n",s2);
	        attack(&p1[x],&p2[y]);
	        if(p1[x].hp <= 0)
	        {
	            printf("%s fainted. Press Any Key to continue....\n", p1[x].name);
				getch();
	            i++;
	            if(i == 3)
	            {
	                printf("%s wins!\n",s2);
	                break;
	            }
				x=playerch(p1);
	            printf("Go %s. Press Any Key to continue....\n", p1[x].name);
	            getch();
	            continue;
	        }
	        printf("\n\n%s's turn:\n",s1);
	        attack(&p2[y],&p1[x]);
	        if(p2[y].hp <= 0)
	        {
	            printf("%s fainted. Press Any Key to continue....\n", p2[y].name);
				getch();
	            j++;
	            if(j == 3)
	            {
	                printf("%s wins!\n",s1);
	                break;
	            }
				y=playerch(p2);
	            printf("Go %s. Press Any Key to continue....\n", p2[y].name);
	            getch();
	            continue;
	        }
	    }
        battlestadium(p1,p2,x,y);
	} while(1);
}
int speedofPokemon(char *name)
{
	sentenceCase(name);
    int i,sum=0,num;
    for(i=0;i<strlen(name);i++)
    {
    	if (name[i] >= 'A' && name[i] <= 'Z')
        {
			num=(name[i] - 'A' + 1);
			sum=sum+num;
		}
        else if(name[i] >= 'a' && name[i] <= 'z')
        {
            num=(name[i] - 'a' + 27);
            sum=sum+num;
		}
		else
		continue;
	}
    return sum/2;
}
int choosePokemon(pokemon *player1,char *name)
{
    int idx=1,num = 3, cap = 20, ch, speed,i,j;
    char *s,*temp;
    printf("================================================================================================\n\n");
    printf("Pokemon Starter Menu\n");
    do
    {
        j = 0;
        printf("Fire type Pokemon:\n1. Charmander\n2. Vulpix\n3. Growlithe\nMai tumhe chunte hoon ");
        s = (char *)malloc(cap * sizeof(char));        
        if (s == NULL) {
            printf("Memory allocation failed\n");
            free(player1);
            return 1;
        }
        scanf("%s", s);
        speed = speedofPokemon(s);
        switch(speed)
        {
            case 159:
                s = "Charmander";
                player1[0].name = (char *)malloc((strlen(s) + 1) * sizeof(char));
                strcpy(player1[0].name, s);
                player1[0].speed=speed;
                break;
            case 117:
                s = "Vulpix";
                player1[0].name = (char *)malloc((strlen(s) + 1) * sizeof(char));
                strcpy(player1[0].name, s);
                player1[0].speed=speed;
                break;
            case 162:
                s = "Growlithe";
                player1[0].name = (char *)malloc((strlen(s) + 1) * sizeof(char));
                strcpy(player1[0].name, s);
                player1[0].speed=speed;
                break;
            default:
                printf("Invalid input\n");
                j = 1;
        }
    } while(j);
    temp="Fire";
    player1[0].attribute = (char *)malloc((strlen(temp) + 1) * sizeof(char));
    strcpy(player1[0].attribute, temp);
    printf("\n%s has joined %s's party. Press Any key to continue......\n", player1[0].name,name,player1[0].attribute);
    getch();
    printf("\n================================================================================================\n\n");
    do
    {
        j = 0;
        printf("Water type Pokemon:\n1. Squirtle\n2. Psyduck\n3. Poliwag\nMai tumhe chunte hoon ");
        s = (char *)malloc(cap * sizeof(char));        
        if (s == NULL) {
            printf("Memory allocation failed\n");
            free(player1);
            return 1;
        }
        scanf("%s", s);
        speed = speedofPokemon(s);
        switch(speed)
        {
            case 151:
                s = "Squirtle";
                player1[1].name = (char *)malloc((strlen(s) + 1) * sizeof(char));
                strcpy(player1[1].name, s);
                player1[1].speed=speed;
                break;
            case 127:
                s = "Psyduck";
                player1[1].name = (char *)malloc((strlen(s) + 1) * sizeof(char));
                strcpy(player1[1].name, s);
                player1[1].speed=speed;
                break;
            case 119:

                s = "Poliwag";
                player1[1].name = (char *)malloc((strlen(s) + 1) * sizeof(char));
                strcpy(player1[1].name, s);
                player1[1].speed=speed;
                break;
            default:
                printf("Invalid input\n");
                j = 1;
        }
    } while(j);
    temp="Water";
    player1[1].attribute = (char *)malloc((strlen(temp) + 1) * sizeof(char));
    strcpy(player1[1].attribute, temp);
    printf("\n%s has joined %s's party. Press Any key to continue......\n", player1[1].name,name,player1[1].attribute);
    printf("\n================================================================================================\n\n");
    getch();
    do
    {
        j = 0;
        printf("Grass type Pokemon:\n1. Bulbasaur\n2. Oddish\n3. Bellsprout\nMai tumhe chunte hoon ");
        s = (char *)malloc(cap * sizeof(char));        
        if (s == NULL) {
            printf("Memory allocation failed\n");
            free(player1);
            return 1;
        }
        scanf("%s", s);
        speed = speedofPokemon(s);
        switch(speed)
        {
            case 152:
                s = "Bulbasaur";
                player1[2].name = (char *)malloc((strlen(s) + 1) * sizeof(char));
                strcpy(player1[2].name, s);
                player1[2].speed=speed;
                break;
            case 94:
                s = "Oddish";
                player1[2].name = (char *)malloc((strlen(s) + 1) * sizeof(char));
                strcpy(player1[2].name, s);
                player1[2].speed=speed;
                break;
            case 187:

                s = "Bellsprout";
                player1[2].name = (char *)malloc((strlen(s) + 1) * sizeof(char));
                strcpy(player1[2].name, s);
                player1[2].speed=speed;
                break;
            default:
                printf("Invalid input\n");
                j = 1;
        }
    } while(j);
    temp="Grass";
    player1[2].attribute = (char *)malloc((strlen(temp) + 1) * sizeof(char));
    strcpy(player1[2].attribute, temp);
    printf("\n%s has joined %s's party. Press Any key to continue......\n", player1[2].name,name,player1[2].attribute);
    printf("\n================================================================================================\n\n");
    for(i=0;i<3;i++)
    {
        player1[i].hp=200;
        player1[i].defense=100;
        player1[i].attack=50;
    }
    printf("\n\n");
    for(i=0;i<3;i++)
    {
    	if (player1[i].name == NULL)
        {
            printf("Memory allocation failed\n");
            free(s);
            free(player1);
            return 1;
        }
	}
    return 0;
}
void freePokemon(pokemon *pname, int n)
{
    for (int i = 0; i < n; i++)
    {
        free(pname[i].name);
    }
}
void showParty(char *name,pokemon *pname)
{
    int i,idx=1;
    printf("\n\n");
    printf("%s's party:\n",name);
    printf("\n");
    printf("================================================================================================\n");
    for(i=0;i<3;i++)
    {
        printf("%d: %s \nHP: %d \t \t Speed: %d\nAttack: %d \t \t Defense: %d\nAttribute: %s\n",idx,pname[i].name,pname[i].hp,pname[i].speed,pname[i].attack,pname[i].defense,pname[i].attribute);
        printf("================================================================================================\n");
        idx++;
    }
    printf("\n\n");
    getch();
}