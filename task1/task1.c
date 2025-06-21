#include<stdio.h>
#include"task1.h"
#include<ctype.h>
#include<string.h>

void str_lower(char *orig, char *copy) {
	int i;
	
	for (i = 0; i <= strlen(orig) ; i++) {
		copy[i] = tolower(orig[i]);
	}
}

void str_lower_mutate(char *orig) {
	int i;
	
	for (i = 0; i <= strlen(orig) ; i++) {
		orig[i] = tolower(orig[i]);
	}
}

int main(void) {
	char str[] = "UPPER";
	char buf[sizeof(str)];

	str_lower(str, buf);
	printf("%s %s\n", str, buf);

	str_lower_mutate(str);
	printf("%s\n", str);

	return 0;
}
