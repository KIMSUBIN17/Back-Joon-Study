#include <stdio.h>
int main()
{
	int N = 0, X=0;
	int temp=0;

	scanf("%d %d\n", &N, &X);

	for (int i = 0; i < N; i++) {
		scanf("%d", &temp);
		if (temp < X)
			printf("%d ", temp);
	}


	return 0;
}