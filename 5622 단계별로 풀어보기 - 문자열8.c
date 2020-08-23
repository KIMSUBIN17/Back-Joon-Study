#include <stdio.h>
#include <string.h>

int main()
{
	char num[16];
	int times[26] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
	int i, pos, result = 0;

	scanf("%s", num);
	int num_len = strlen(num);

	for (i = 0; i < num_len; i++)
	{
		pos = num[i] - 'A';
		result += times[pos];
	}

	printf("%d", result);

	return 0;
}