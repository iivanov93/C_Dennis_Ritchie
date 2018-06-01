/*
 * Exercise 1-8. Write a program to count blanks, tabs, and newlines.
 */

#include <stdio.h>

int main() {
	int c;
	long int CountBlanks = 0;
	long int CountTabs = 0;
	long int CountNL = 0;

	while ((c = getchar()) != EOF) {
		if ( c == '\n' );
			CountNL++;
		if ( c == '\t' );
			CountTabs++;
		if ( c == ' ' );
			CountBlanks++;	
	}

	printf("Blanks %ld \t Ne Lines %ld \t Tabs %ld \n", CountBlanks, CountNL, CountTabs); 

	return 0;
}
