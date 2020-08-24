#include <stdio.h>
int main()
{
	int year;
	scanf("%d", &year);

	if (!(year % 400))    //400의 배수
		printf("1");
	else if (!(year % 100))   //400의배수 아님 & 100의 배수
		printf("0");
	else if (!(year % 4))    //400의 배수 아님 & 100의 배수 아님
		printf("1");

	else
		printf("0");

	return 0;
}