#include <stdio.h>
#include <errno.h>
#include <stdbool.h>
struct mensch {
	int alter;
	char name[];
	bool männlich_weiblich;
}


int Alter(){
	int alter;
	printf("name eingben: \n");
	scanf("%d", &alter);
	return alter;
}
bool Geschlecht(){
	char Geschlecht[];
	bool a;
	printf("Geschlecht eingeben in Kleinbuchstaben: \n");
	scanf("%c",Geschlecht);
		if (Geschlecht[] == "männlich")
			a = true;
		else
			a = false;
return a;
}
int main() {
char name[];
bool bestetigung;
printf("Name eingeben: \n");
scanf("%c",name[]);
printf("Ist das ihr Name: %c?\n Wenn ja dann geben sie 0 ein und wenn der Name falsch ist geben Sie 1 ein", name[]);
scanf("%b", &bestetigung);
	if (bestetigung == true)
		printf("Wir fahren fort");
	else
		EXIT_SUCCES();
int alter=Alter();
bool geschlecht=Geschlecht();

}
