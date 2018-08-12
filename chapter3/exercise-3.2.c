#include <stdio.h>
#include <string.h>

#define MAX 1000

void escape(char s[], char t[]);
void escape_reverse(char s[], char t[]);

int main (void) {
	int c;
	char s[MAX];
	char t[MAX];
	int i = 0;

	while ( ( c = getchar() ) != EOF ) {
		s[i++] = c;
		//escape(s, t); /*remove comment for text to special symbol*/
		escape_reverse(s, t); /*special symbol to text*/
		s[i+1] = '\0';
	}
	

	printf("input s[]: %s\n", s);
	printf("Output t[]: %s\n", t);
	return 0;
}

void escape(char s[], char t[]) {
	int i, j = 0;
	int len = 0;
	int temp = 0;
	len = strlen(s);

	for ( i = 0; i < len + 1 + temp; i++) {
		switch (s[i]) {
			case '\n':
			       	{
					temp++;
					t[j++] = '\\';
					t[j++] = 'n';
					break;
				  }
			case '\t':
			       	{
					temp++;
					t[j++] = '\\';
					t[j++] = 't';
					break;
				}
			default: 
				{
					t[j++] = s[i];
					break;
				}
		}
	}


	t[j+1] = '\0';

	return ;
}

void escape_reverse(char s[], char t[]) {
	int i, j = 0;
	int len = 0;
	int temp = 0;
	len = strlen(s);

	for ( i = 0; i < len + 1; i++) {
		switch (s[i]) {
			case '\\': 
				switch (s[i+1]) {
					case 'n':
						{
							t[j++] = '\n';
							i++;
						}
					case 't':
						{
							t[j++] = '\t';
							i++;
						}
				}
		default: {
				t[j++] = s[i];
			 }

		}

	}//




	t[j+1] = '\0';

	return ;
}
