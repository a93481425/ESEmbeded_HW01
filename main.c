#include <stdio.h>
#include <stdlib.h>

int plus(int a, int b) { return a + b; }
int minus(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divided(int a, int b) { return a / b; }

int(*jmp[]) (int a,int b)={};

int main()
{
	int a, c, t;
	char b;
	printf("key a Function \nEX: 1 + 1\n");
	scanf("%i %c %i", &a, &b, &c);

        t = b-'(';
        jmp[3]=plus;
        jmp[5]=minus;
        jmp[2]=multiply;
        jmp[7]=divided;

        printf("%d %c %d = %d\n", a, b, c, jmp[t](a, c) );
}
