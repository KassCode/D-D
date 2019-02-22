//Created by Tamara Kasson for CSC 250
//RPG Character Generator
//involves rpg.c file and hero.h file to run#include "hero.h"
#include <stdio.h>

void print_party(Hero_t party[], int size)
{
	int i;

	for(i =0; i < size; i++)
	{
		printf("Name: %s\n", party[i].name);
		printf("Class: %s\n", party[i].class);
		printf("Strength: %d\n", party[i].strength);
		printf("Intelligence: %d\n", party[i].intelligence);
		printf("Charisma: %d\n", party[i].charisma);
		printf("Hit Points: %d\n", party[i].hp);
		printf("Mana: %d\n", party[i].mana);
		printf("--------------------------------------\n");
	}

}