#include <stdio.h>
 	
#define MAXLINE 1000

int getlinee(char s[], int maxline);
void copy(char output[], char input[]);

int main(void) {
	int len;
	int max;
	int i;
	
	char line[MAXLINE];
	char longest[MAXLINE];

	while((len = getlinee(line, MAXLINE)) > 0) {
		if ( len > max ) {
			max = len;
			copy(longest, line);
			}
	}

	printf("Length of longest line: %d\nLine output: %s\n", (max-1), longest);

	return 0;
}

int getlinee(char line[], int max)
{
	int c, i;

	for(i = 0; ((c = getchar()) != EOF) && c != '\n'; ++i)
		line[i] = c;

	if(c == '\n')
		line[i++] = c;

	line[i] = '\0';

	return i;
}

void copy(char output[], char input[]) {
	int i = 0;	

	while ( ( output[i] = input[i] ) != '\0')
		++i;


	return ;
}
