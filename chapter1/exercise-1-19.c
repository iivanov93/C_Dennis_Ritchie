#include <stdio.h>
 	
#define MAXLINE 1000

int getlinee(char s[], int maxline);
void reverse(char output[], char input[], int  len);

int main(void) {
	int len;
	int max;
	int i;
	
	char line[MAXLINE];
	char rev[MAXLINE];

	while((len = getlinee(line, MAXLINE)) > 0) {
		reverse(rev, line, len);
		printf("%s\n", rev);
	}

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

void reverse(char output[], char input[], int  len) {
	int i;
	int j = 0;

	for ( i = len - 1; i >=  0 ; i--)
		output[j++] = input[i];
	
	output[len] = '\0';

	return ;
}

