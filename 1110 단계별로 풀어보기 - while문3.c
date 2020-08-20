#include<stdio.h>

int main()
{

	int num,n = 0;
	int last = -1;
	int a, b = 0;   
	scanf("%d", &num);
	a = num / 10;
	b = num % 10;

	while (num != last) {
		int result = a + b;
		last = b * 10 + result % 10;
		n++;
		a = last / 10;
		b = last % 10;
	}

	printf("%d", n);
	return  0;
	



}