#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 1000

int toint(char input);
char tochar(int input);
int check(char input[], char values[]);
void valtoint(char values[], int ivalues[], int num);
void write(int num, int ivalues[], char s2[]);

int main(void) {
   char s1[] = "a-z";
   char s2[MAX];
   char values[MAX];
   int ivalues[MAX];

    int io1, io2;
    char test;
    int num;

    num = check(s1, values); 
    valtoint(values, ivalues, num);
    
    int val = strlen(values);
    write(num, ivalues, s2);
    printf("%s \n", s2);
    
   return 0;
}

void write(int num, int ivalues[], char s2[]) {
    int i, j;

    int k = 0;
    int val;

    for ( i = 0; i <= num; i++) {
        for ( j = ivalues[i]; j <= ivalues[i+1]; j++) {
            s2[k] = tochar(j);
            k++;
        }
    }

    s2[j] = '\0';

    return;
}

void valtoint(char values[], int ivalues[], int num) {
    int i;

    for (i = 0; i <= num; i++) {
        ivalues[i] = toint(values[i]);
    }

    return;
}

int check(char input[], char values[]) {
    int len;
    int j = 0, i;
    int counter = 0;

    len = strlen(input);

    for ( i = 0; i < len; i++) {
        if(input[i] != '-') {
            counter++;
            values[j] = input[i];
            j++;
        }
    }

    values[j] = '\0';

    return counter - 1;
}


int toint(char input) {
    return input - '0';
}

char tochar(int input) {
    return input + '0';
}
