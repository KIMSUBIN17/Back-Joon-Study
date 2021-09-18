/*링크 : https://www.acmicpc.net/problem/1427*/

n = int(input())

list=[]
for i in str(n):
    list.append(int(i))
    
list.sort(reverse=True)

for i in list:
    print(i,end='')

'''
#문제
배열을 정렬하는 것은 쉽다. 수가 주어지면, 그 수의 각 자리수를 내림차순으로 정렬해보자.

#입력
첫째 줄에 정렬하고자하는 수 N이 주어진다. N은 1,000,000,000보다 작거나 같은 자연수이다.

#풀이
1. list배열 초기화
2. sorted()함수 사용해 list의 숫자들을 내림차순정렬
3. 정렬된 리스트 end=''사용해 한개씩 출력
리스트와 같은 iterable객체는 기본으로 sort()함수 내장하고 있어서 굳이 sorted()함수 사용 않고도 sort()함수 사용해 바로 정렬 가능

'''