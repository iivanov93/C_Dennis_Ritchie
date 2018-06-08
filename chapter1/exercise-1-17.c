#include <stdio.h>
 	
#define MAXLINE 1000
#define MAXCOUNT 80

int getlinee(char s[], int maxline);

int main(void) {
	int len;
	int max;
	int c;
	
	char line[MAXLINE];
	char longest[MAXLINE];

 	while ((len = getlinee(line,MAXLINE)) > 0) {
       		 if (line[len-1] != '\n') {
           		 while ((c = getchar()) != EOF && c != '\n')
                		len++;
        		}
        	if (len > MAXCOUNT) {
            		printf("%s", line);
       		 }
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
