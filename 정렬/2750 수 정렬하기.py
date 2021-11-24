/*링크 : www.acmicpc.net/problem/2750 */

n = int(input())
array = []

for i in range(n):
  array.append(int(input()))

array.sort()

for i in array:
    print(i)

'''
첫째 줄에 수의 개수 N(1 ≤ N ≤ 1,000)이 주어진다. 둘째 줄부터 N개의 줄에는 수 주어진다. 이 수는 절댓값이 1,000보다 작거나 같은 정수이다. 수는 중복되지 않는다.
1. 수의 개수 n입력
2. 수 저장할 array 초기화
3. for문 이용해 n 개의 숫자들을 리스트에 삽입
4. 파이썬 내장 라이브러리 sort()함수 사용해 오름차순 정렬
5. 정렬한 숫자들 한개씩 출력
'''