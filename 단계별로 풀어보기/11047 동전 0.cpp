#include <iostream>
#include <vector>

using namespace std;

vector<int> a;

int main(void) {
	int n, k;
	cin >> n >> k;
	int result = 0;
	 
	for(int i = 0; i < n; i++){
		int x;
		//화폐 종류 담을 수 있는 배열 생성 
		cin >> x;
		a.push_back(x);
	}
	for(int i = a.size() - 1; i >= 0; i--){
		result += k / a[i];
		k %= a[i];
		//화폐 가치 큰 것부터 나누어줌 (처리순서 거꾸로) 
	}
	cout << result;
	return 0;
}