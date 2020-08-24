#include<stdio.h>

//1자리수, 2자리수는 모두 한수

int main() {

	int n,i,k,t=0;
	int han=0;
	int arr[3];
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {

		if (i < 100)
			han = i;
		else if (i == 1000) break;
		else {
			k = 0;
			t = i;
			while (t > 0) {
				arr[k] = t % 10;
				t /= 10;
				k++;
			}
			if (arr[0] - arr[1] == arr[1] - arr[2])
				//각 자릿수별로 나뉜 수가 한수인지 아닌지 판단(차가 같아야함)
				han++;
		}

	}

	printf("%d", han);
	return 0;

}