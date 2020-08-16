#include <stdio.h>
#include <stdlib.h>

int main()
{
	char characterName[] = "Peter";
	int characterAge = 33;

	printf("There once was a man named %s\n", characterName);
	printf("He was %d years old.\n", characterAge);

	characterAge = 25;
	printf("He really liked the name %s\n", characterName);
	printf("but did not like being %d\n", characterAge);
	
	
	return 0;
}