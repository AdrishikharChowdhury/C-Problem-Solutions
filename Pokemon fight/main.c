#include "pokemon_battle.h"

int main() 
{
    pokemon *player1, *player2;
    int num=3, i,cap=1,a,b;
    char *s1,*s2;
    printf("Enter name of the 1st player: ");
    s1=(char *)malloc(cap*sizeof(char));
    scanf("%s",s1);
    sentenceCase(s1);
    printf("Enter name of the 2nd player: ");
    s2=(char *)malloc(cap*sizeof(char));
    scanf("%s",s2);
    sentenceCase(s2);
    printf("\n\n");
    player1 = (pokemon *)malloc(num * sizeof(pokemon));
    if (player1 == NULL) {
        printf("Memory allocation failed for player1\n");
        return 1;
    }
    printf("%s's Team:\n",s1);
    printf("\n");
    choosePokemon(player1,s1);
    player2 = (pokemon *)malloc(num * sizeof(pokemon));
    if (player2 == NULL) {
        printf("Memory allocation failed for player2\n");
        freePokemon(player1,num);
        free(player1);
        return 1;
    }
    printf("%s's Team:\n",s2);
    printf("\n");
    choosePokemon(player2,s2);
    showParty(s1,player1);
    printf("\n");
    stadium(s1,s2);
    printf("\n");
    getch();
    showParty(s2,player2);
    a=playerch(player1);
	b=playerch(player2);
    H2H1(player1,player2,s1,s2,a,b);
    freePokemon(player1, num);
    free(player1);
    freePokemon(player2, num);
    free(player2);
    return 0;
}