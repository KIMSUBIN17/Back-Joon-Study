#include <stdio.h>
int main()
{
	int T = 0, A = 0, B = 0;
	scanf("%d", &T);

	for (; T > 0; T--) {
		scanf("%d %d", &A, &B);
		printf("%d\n", A + B);
	}

	return 0;
}