#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct pokemon {
    char *name;
    int hp;
    int attack;
    int defense;
    int speed;
} pokemon;

void choosePokemon(pokemon *pname, int n) 
{
    int i;
    char temp[100]; 

    for (i = 0; i < n; i++) {
        printf("Enter the name of the pokemon: ");
        scanf("%s", temp); 
        pname[i].name = (char *)malloc((strlen(temp) + 1) * sizeof(char)); 
        if (pname[i].name == NULL) {
            printf("Memory allocation failed\n");
            exit(1);
        }
        strcpy(pname[i].name, temp); 
        printf("Pokemon %d: %s\n", i + 1, pname[i].name); 
    }
}
void freePokemon(pokemon *pname, int n) 
{
    for (int i = 0; i < n; i++) 
    {
        free(pname[i].name);
    }
}

int main() {
    pokemon *player1, *player2;
    int num, i;
    printf("Enter the number of pokemons you want to play: ");
    scanf("%d", &num);
    if(num != 1 || num <= 0) 
    {
        printf("Invalid input for number of pokemons.\n");
        return 1;
    }
    player1 = (pokemon *)malloc(num * sizeof(pokemon));
    if (player1 == NULL) 
    {
        printf("Memory allocation failed for player1\n");
        return 1;
    }
    printf("1st player's Team:\n");
    choosePokemon(player1, num);
    player2 = (pokemon *)malloc(num * sizeof(pokemon));
    if (player2 == NULL) 
    {
        printf("Memory allocation failed for player2\n");
        freePokemon(player1, num);
        free(player1);
        return 1;
    }
    printf("2nd player's Team:\n");
    choosePokemon(player2, num);
    printf("Player 1 Team \t \t Player 2 Team\n");
    for (i = 0; i < num; i++) 
    {
        printf("%s \t \t %s\n", player1[i].name, player2[i].name);
    }
    freePokemon(player1, num);
    free(player1);
    freePokemon(player2, num);
    free(player2);
    return 0;
}
