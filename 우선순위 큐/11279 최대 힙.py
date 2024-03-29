import sys, heapq
heap=[]

for i in range(int(sys.stdin.readline().rstrip())):
    n = int(sys.stdin.readline().rstrip()) * -1
    if n == 0:
        if len(heap) == 0:
            print(0)
        else:
            print(heapq.heappop(heap)*-1)
    else:
        heapq.heappush(heap,n)
        

#파이썬의 heapq라이브러리 사용
# heapq가 최소힙만 지원하므로 입력값을 음수로 처리해 최대힙처럼 사용
#1. 배열에 자연수 넣음
#2. 배열에서 가장 큰 값 출력하고, 그 값을 배열에서 제거
# 입력에서 0이 주어진 횟수만큼 답 출력. 배열이 비어있다면 0출력
# 입력속도 향상위해 sys.stdin.readline()함수 이용