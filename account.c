#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int account_erstellung() {
	FILE *pF = fopen("acount_daten.txt","w");
	char yes_or_no;

	printf("Wollen sie ein Konto erstellen? Y/n");
	scanf("%c", &yes_or_no);
	yes_or_no = toupper(yes_or_no);
	return 0;
}

int main() {
	int a;

	account_erstellung();
	
	return 0;
}

