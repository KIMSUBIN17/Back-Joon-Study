#include <stdio.h>
#include <string.h>

int main()
{

	int i,n,ans = 0;

	scanf("%d", &n);   //입력받을 단어의 개수

	for (int i = 0; i < n; i++) {
		char word[101] = { 0 };
		scanf("%s", word);

		int count[26] = { 0, };
		int cnt = 0;
		int len = strlen(word);

		for (int j = 0; j < len; j++) {
			if (word[j] != word[j + 1])
				count[(word[j] - 'a')]++;
		}
		for (int j = 0; j < 26; j++) {
			if (count[j] > 1) {
				cnt++;
				break;
			}
		}
		if (cnt == 0)
			ans++;


	}

	printf("%d", ans);

	return 0;
}