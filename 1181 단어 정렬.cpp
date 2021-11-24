#include <iostream>
#include <algorithm>

using namespace std;

	string a[20000];
	int n;
	
	//문자열 비교
	//자기자신을 어떤 문자열과 비교했을때 더 짧으면 우선순위 높음 
	bool compare(string a, string b){
		//길이가 짧은 순서 우선
		if(a.length() < b.length()) {  //a가 더 짧으면 우선순위가 높게 
			return 1;
			
		} else if(a.length() > b.length()){
			return  0;
		}
		//길이가 같은경우라면
		else {
			return a < b;  //string에서 자동으로 사전순 비교 
		} 
	
	}

int main(void){
	
	cin >> n;   //n개 입력받음 
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a, a + n, compare);  //n개수만큼 compare로 비교
	for(int i =0; i< n; i++){
		//동일한 단어는 패스하고 출력 (바로왼쪽에 있는 값과 같으면 무시) 
		if(i > 0 && a[i] == a[i - 1]){
			continue;
		} else {
			cout << a[i] << '\n';
		}
	} 
	return 0;
} 