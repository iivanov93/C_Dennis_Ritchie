#include <stdio.h>

int main(void){
	int c;
	int hist = 0;
	int i;

 	while ( (c = getchar()) != EOF) {
		hist++;
		if ( c == ' ' || c == '\n' || c == '\t') {
			for ( i = 0; i < hist - 1; i++)
				printf("*");
		printf("\n");
		hist = 0;		
		}
		
		if ( c == '0')
			break;
	}

	return 0;
}
