#include <stdio.h>

int array[1001];

int main(void) {
	int number, i, j, min, index, temp;
	scanf("%d", &number);
	for(i = 0; i < number; i++) {
		scanf("%d", &array[i]);
	}
	for(i = 0; i < number; i++) {
		min = 1001;
		for(j = i; j < number; j++) {
			if(min > array[j]) {
				min = array[j];
				index = j;  //최솟값을 현재 검색하는 값으로 바꿈 
			}
		}
		//내가 찾은 최솟값과 제일 앞에있는 값을 교환
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}
	for(i = 0; i < number; i++) {
		printf("%d\n", array[i]);
	}
	return 0;
}
//선택정렬사용
