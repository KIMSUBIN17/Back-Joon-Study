#include<stdio.h>

int main() {

	int n,sum = 0;
	char arr[101] = {0,};

	scanf("%d", &n);
	scanf("%s", arr);

	for (int i = 0; i < n; i++) {
		sum = sum + (arr[i] - '0');
	}

	printf("%d", sum);

	return 0;
}


//ex)'char' A라는 변수에 입력 값으로 0을 넣고, 10진수로 출력하면 0이아닌 48이 나옴-> A라는 변수 타입이 숫자 의미하는 int가 아닌 문자 의미하는 char이기때문
//문제에서는 문자의 의미인 0이 아니라 10진수의 의미 0을 원하기때문에 그만큼 빼줘야함 ->  -'0' or -48 둘다 같은 의미
//결론)'0'~'9'의 char값에서 '0'을 빼는 것은 실제 10진수 0~9로 바꾸는 것이 가능
