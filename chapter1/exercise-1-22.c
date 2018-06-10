#include <stdio.h>

#define MAX 1000
#define tab 5
#define MAXCHAR 10


int detab ( char _output[] );
void if_long (char input[],  char _iflong1[], char _iflong2[], int len);

int main (void) {
	int c;
	char output[MAX];
	int j, i;
	char iflong1[MAX], iflong2[MAX];
	
	i = detab(output);
	if_long(output, iflong1, iflong2, i);	
	
	printf("%s\n", iflong1);
	printf("%s\n", iflong2);

	return 0;
}

void if_long (char input[],  char _iflong1[], char _iflong2[], int len) {
	int i, j, k = 0;
	if (len > MAXCHAR) {
		for (i = 0; i < MAXCHAR; i++) 
			_iflong1[i] = input[i];
		for (j = MAXCHAR; j <= len; j++)	
			_iflong2[k++] = input[j];
	}

	_iflong1[i+1] = '\0';
	_iflong2[j+1] = '\0';

	return ;
}

int detab ( char _output[] ) {
	int c;
	int i = 0, j;

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
