#include <stdio.h>
#include <ctype.h>

unsigned long htoi(const char s[]);

int main(void) {
        printf("%ld\n", htoi("0xFB0A"));
        printf("%ld\n", htoi("0xffff"));
        printf("%ld\n", htoi("0x1111"));
        printf("%ld\n", htoi("0xDaC8"));

	printf("Without htoi()\n");
		printf("%d\n", 0xFB0A);
		printf("%d\n", 0xffff);
		printf("%d\n", 0x1111);
		printf("%d\n", 0xDaC8);

	return 0;
}

unsigned long htoi(const char s[]) {
        unsigned long n = 0;

        for (int i = 0; s[i] != '\0'; i++) {
                int c = tolower(s[i]);
                if (c == '0' && tolower(s[i+1]) == 'x')
                        i++;
                else if (c >= '0' && c <= '9')
                        n = 16 * n + (c - '0');
                else if (c >= 'a' && c <= 'f')
                        n = 16 * n + (c - 'a' + 10);
        }
	
        return n;
}
