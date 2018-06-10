/* work solution for 20 and 21*/
#include <stdio.h>

#define MAX 1000
#define tab 5


int detab ( char _output[] );

int main (void) {
	int c;
	char output[MAX];
	int j, i;
	
	i = detab(output);

	printf("%s", output);

	return 0;
}

int detab ( char _output[] ) {
	int c;
	int i = 0, j;
	int k = 0;

	while ( (c = getchar()) != EOF ) {
		_output[i] = c;
			if ( c == '\t') {
				_output[i] = ' ';
				for ( j = 1; j <= tab-1; j++) {
					_output[i+j] = ' ';
				}
				i +=j;
				i--;
			}
				
		i++;
		if ( c == '\n')
			_output[i] = '\0';
	}
	
	return i;
}
