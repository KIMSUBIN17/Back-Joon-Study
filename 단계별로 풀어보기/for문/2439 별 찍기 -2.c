#include <stdio.h>
int main()
{
	int N = 0, j = 0;
	scanf("%d\n", &N);
	for (int i = 1; i <= N; i++) {
		for (j = 1; j <= N-i; j++)  //공백출력
			printf(" ");
		for (; j <= N; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}