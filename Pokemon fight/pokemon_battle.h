#ifndef POKEMON_BATTLE_H
#define POKEMON_BATTLE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

typedef struct pokemon {
    char *attribute;
    char *name;
    int hp;
    int attack;
    int defense;
    int speed;
} pokemon;
void sentenceCase(char *name);
void stadium(char *a, char *b);
int playerch(pokemon *p1);
void battlestadium(pokemon *p1, pokemon *p2, int i, int j);
void attack(pokemon *p, pokemon *c);
void H2H1(pokemon *p1, pokemon *p2, char *s1, char *s2,int a,int b);
int speedofPokemon(char *name);
int choosePokemon(pokemon *player1, char *name);
void freePokemon(pokemon *pname, int n);
void showParty(char *name, pokemon *pname);

#endif
