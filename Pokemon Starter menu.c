#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<ctype.h>
typedef struct pokemon {
    char *name;
    char *attribute;
    int hp;
    int attack;
    int defense;
    int speed;
} pokemon;
void showParty(pokemon *pname)
{
    int i,idx=1;
    printf("Your party:\n");
    for(i=0;i<3;i++)
    {
        printf("Pokemon %d: %s (Attribute: %s)\n",idx,pname[i].name,pname[i].attribute);
        idx++;
    }
}
int speedofPokemon(char *name)
{
    int i,num,sum=0;
    int n=strlen(name);
    name[0] = toupper(name[0]);
    for (i = 1; i < n; i++) 
    {
        name[i] = tolower(name[i]);
    }
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
int main()
{
    pokemon *player1;
    char *s,*temp;
    int idx=1,num = 3, cap = 20, ch, speed,i,j;
    player1 = (pokemon *)malloc(num * sizeof(pokemon));    
    if (player1 == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Pokemon Starter Menu\n");
    do
    {
        j = 0;
        printf("Fire type Pokemon:\n1. Charmander\n2. Vulpix\n3. Growlithe\nYou choice: ");
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
                break;
            case 117:
                s = "Vulpix";
                player1[0].name = (char *)malloc((strlen(s) + 1) * sizeof(char));
                strcpy(player1[0].name, s);
                break;
            case 162:
                s = "Growlithe";
                player1[0].name = (char *)malloc((strlen(s) + 1) * sizeof(char));
                strcpy(player1[0].name, s);
                break;
            default:
                printf("Invalid input\n");
                j = 1;
        }
    } while(j);
    temp="Fire";
    player1[0].attribute = (char *)malloc((strlen(temp) + 1) * sizeof(char));
    strcpy(player1[0].attribute, temp);
    printf("%s has joined your party (Attribute: %s)\n", player1[0].name,player1[0].attribute);
    do
    {
        j = 0;
        printf("Water type Pokemon:\n1. Squirtle\n2. Psyduck\n3. Poliwag\nYou choice: ");
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
                break;
            case 127:
                s = "Psyduck";
                player1[1].name = (char *)malloc((strlen(s) + 1) * sizeof(char));
                strcpy(player1[1].name, s);
                break;
            case 119:

                s = "Poliwag";
                player1[1].name = (char *)malloc((strlen(s) + 1) * sizeof(char));
                strcpy(player1[1].name, s);
                break;
            default:
                printf("Invalid input\n");
                j = 1;
        }
    } while(j);
    temp="Water";
    player1[1].attribute = (char *)malloc((strlen(temp) + 1) * sizeof(char));
    strcpy(player1[1].attribute, temp);
    printf("%s has joined your party (Attribute: %s)\n", player1[1].name,player1[1].attribute);
    do
    {
        j = 0;
        printf("Grass type Pokemon:\n1. Bulbasaur\n2. Oddish\n3. Bellsprout\nYou choice: ");
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
                break;
            case 94:
                s = "Oddish";
                player1[2].name = (char *)malloc((strlen(s) + 1) * sizeof(char));
                strcpy(player1[2].name, s);
                break;
            case 187:

                s = "Bellsprout";
                player1[2].name = (char *)malloc((strlen(s) + 1) * sizeof(char));
                strcpy(player1[2].name, s);
                break;
            default:
                printf("Invalid input\n");
                j = 1;
        }
    } while(j);
    temp="Grass";
    player1[2].attribute = (char *)malloc((strlen(temp) + 1) * sizeof(char));
    strcpy(player1[2].attribute, temp);
    printf("%s has joined your party (Attribute: %s)\n", player1[2].name,player1[2].attribute);
    showParty(player1);
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