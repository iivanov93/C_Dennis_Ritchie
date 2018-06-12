#include <stdio.h>
#include <string.h>

#define MAX 1000

void sqeeze2 ( char s[], char s2[]);

int main (void) { 
	char s1[MAX] = "siavlanta";
	char s2[MAX] = "ivn";

	printf("s1: %s\ns2: %s\n",s1, s2);

	sqeeze2(s1, s2);

	printf("output: %s\n",s1);

	return 0;
}

void sqeeze2 ( char s[], char s2[]) {
	int len1, len2;
	int i, j, k;
	int temp1, temp2;

	len1 = strlen(s);
	len2 = strlen(s2);
	
	printf("%d %d\n", len1, len2);
	
	for ( k = 0; k <= len2; k++) {
		for ( i = j = 0; i <= len1; i++) {
				if ( s[i] != s2[k])
					s[j++] = s[i];
				}
	}

	s[j] = '\0';

	return ;
}
