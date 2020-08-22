#include<stdio.h>

int main() {

	char arr1[4] = { 0 };
	char arr2[4] = { 0 };

	scanf("%s %s", arr1, arr2);

	for (int i = 2; i >= 0; i--) {
		if (arr1[i] > arr2[i]) {
			printf("%c%c%c", arr1[2], arr1[1], arr1[0]);
			break;
		}
		else if (arr1[i] < arr2[i])
		{
			printf("%c%c%c", arr2[2], arr2[1], arr2[0]);
			break;
		}

	}

	return 0;
}