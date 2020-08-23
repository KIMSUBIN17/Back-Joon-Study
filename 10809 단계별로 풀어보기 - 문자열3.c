#include<stdio.h>
#include<string.h>

int main() {

	char s[101];   //문자열 입력받을 배열
	int alpha[27];  //알파벳위치표시배열

	scanf("%s", s);


	for (int i = 0; i < 26; i++) {  //단어에 알파벳이 없으면  //모든 알파벳들을 -1(없음)로 초기화
		alpha[i] = -1;
	}


	//문자열 길이만큼 반복

	for (int i = 0; i < strlen(s); i++) {

		if (alpha[s[i] - 97] == -1) //만약 (아스키코드-97)가 -1(처음나온경우)라면

			alpha[s[i] - 97] = i; //알파벳이 나온 위치를 넣기

	}

	//문자열 길이만큼 입력받은 단어를 한글자씩 비교
	for (int i = 0; i < strlen(s); i++) {
		for (int j = 97; j < 123; j++) {
			if (s[i] == j) {   //같은알파벳찾기
				if (alpha[i - 97] == -1)  //위치확인되면 위치 입력
					alpha[j - 97] = i;
			}
		}
	}
	//a의 아스키코드값=97 ->0번 인덱스부터 넣기 위해서 그 값 빼줘야함
	//alpha배열의 index넣을때 alpah[i]-97해줘야함

	for (int i = 0; i < 26; i++) {
		printf("%d ", alpha[i]);
	}

	return 0;
}