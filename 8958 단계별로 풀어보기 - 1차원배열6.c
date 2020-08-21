#include<stdio.h>

int main()
{
	int n, score = 0;
	scanf("%d", &n);
	char arr[81];
	int count = 1;

	for (int i = 0; i < n; i++) {
		scanf("%s", arr);

		for (int i = 0; i < 80; i++) {
			if (arr[i] == 'O')
			{
				score += count;
				count++;
			}
			else
			{
				count = 1;
			}
			arr[i] = '\n';
		}
		printf("%d\n", score);
		count = 1;
		score = 0;

	}

	return  0;

}