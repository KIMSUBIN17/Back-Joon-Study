//10000000 -> 2억번 너무 큼.범위조건있는경우 계수정렬 사용

#include <iostream>

using namespace std;

int n;
int a[10001];  //배열을 전역변수로 선언하면 프로그램 시작과 동시에 모든 인덱스 원소값이 0으로 초기화 

int main(void){
	scanf("%d", &n);
	for(int i = 0; i< n; i++){
		int x;
		scanf("%d", &x);
		a[x]++;
	}
	for(int i = 0; i < 10001; i++){
		while(a[i] !=0){
			printf("%d\n", i);
			a[i]--;
		}
	}
}