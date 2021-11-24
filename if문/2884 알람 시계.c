#include <stdio.h>
int main()
{
	int hour, min;
	scanf("%d %d", &hour, &min);

	if (min < 45 && hour>0) {
		hour--;
		min = (min + 60) - 45;
	}

	else if (min < 45) {
		hour= 23;
		min = (min + 60) - 45;
	}

	else {
		min = min-45;
	}

	printf("%d %d", hour, min);
	return 0;
}