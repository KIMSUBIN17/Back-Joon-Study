#include<stdio.h>
#include<string.h>

int main() {

	int t, r;
	char arr[21];   //문자열 입력받을 배열

	scanf("%d", &t);
	
	for (int i = 0; i < t; i++) {
		scanf("%d %s", &r, arr);
		for (int j=0; j < strlen(arr); j++) {
			for (int i = 0; i < r; i++) {
				printf("%c", arr[j]);
			}
		}
		printf("\n");
	}

	return 0;
}