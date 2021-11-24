#include <stdio.h>
int main()
{
	int num1, num2;
	int tmp = 0;
	scanf("%d %d", &num1, &num2);   //--(1),(2) 곱셈할 수 2개 입력

	tmp = num2 % 10;
	printf("%d\n", num1 * tmp);  // --(3) = (2)를 10으로 나눈 나머지

	tmp = (num2 % 100) / 10;
	printf("%d\n", num1 * tmp);   // --(4) = (2)의 10의 자리수. 100의 나머지 몫

	tmp = num2 / 100;
	printf("%d\n", num1 * tmp); // --(5) = (2)의 100자리수. 100으로 나눈 몫

	printf("%d", num1 * num2);  // --(6) 곱

	return 0;
}