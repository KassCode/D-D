#ifndef HERO_H
#define HERO_H
// must define first to use in other struct
typedef struct 
{
	char type[20];
	int dmg;
}Weapon_t;

typedef struct
{
	char name[20];
	char class[20];
	int strength;
	int intelligence;
	int charisma;
	int hp;
	int mana;
	Weapon_t weapon;

}Hero_t;



void print_party(Hero_t party[], int size);
// order matters must be defined before use
// since no computations no .c file needed
#endif