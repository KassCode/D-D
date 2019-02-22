#include <stdio.h>
#include "hero.h"

/*placed in hero.h
typedef struct
{
	char name[20];
	char class[20];
	int strength;
	int intelligence;
	int charisma;
	int hp;
	int mana;

}Hero_t;
*/ 
// Hero_t return type to return structures
/*placed in hero.c
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
*/ 
int main(int argc, char* argv[])
{
	Hero_t mage = {"Stassi", "Druid", 7, 15, 11, 5, 10};

	printf("%s is a Level 1 %s and has hit points equal to %d\n", mage.name, mage.class, mage.hp);

	Hero_t knight;
	knight.strength = 12;
	knight.intelligence = 7;
	knight.charisma = 8;
	knight.hp = 9;
	knight.mana = 4;
	strcpy(knight.name, "Dudebro");
	strcpy(knight.class, "Shadow Knight");

	printf("%s is a Level 1 %s and has hit points equal to %d\n", knight.name, knight.class, knight.hp);


	Hero_t party[2]; // array of structures
	party[0] = knight;
	party[1] = mage;

	print_party(party, 2);


	return 0;
}