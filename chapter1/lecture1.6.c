#include <stdio.h>

int main (void) {
	int c, i, nwhite = 0, nother = 0;
	int ndigit[10];

	for (i = 0; i < 10; ++i)
		ndigit[i] = i;

	while (( c = getchar()) != EOF) {
		if ( c >= '0' && c <= '9')
			++ndigit[c-'0'];
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;
		if ( c == '0')
			break;
	}

	printf("digits =");
		for (i = 0; i < 10; ++i)
			printf(" %d", ndigit[i]);
	printf(", white space = %d, other %d", nwhite, nother);

	return 0;
}
