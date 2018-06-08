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
		if (line[len-1] == ' ' || line[len-1] == '\t')
			line[len - 1] == '\0';
		if (line[len-1] == '\n' && line[len] == '\0')
			line[len-1] = '\0';

		printf("%s", line);	
		
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

void copy(char output[], char input[]) {
	int i = 0;	

	while ( ( output[i] = input[i] ) != '\0')
		++i;


	return ;
}
