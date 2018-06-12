#include <stdio.h>
#include <string.h>

#define MAX 1000

int any ( char s[], char s2[]);

int main (void) { 
	char s1[MAX] = "ssssiavlanta";
	char s2[MAX] = "ivn";

	printf("s1: %s\ns2: %s\n",s1, s2);

	printf("The first identical symbol is on position %d equal to s1[%d]\n", any(s1, s2)+1, any(s1, s2) );
	


	return 0;
}

int any ( char s[], char s2[]) {
	int len1, len2;
	int i, j, k;

	len1 = strlen(s);
	len2 = strlen(s2);
	
	for ( k = 0; k <= len2; k++)
		for ( i = 0; i <= len1; i++)
				if ( s[i] == s2[k]) {
					return i;
					break;
				}

}
