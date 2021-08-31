n = int(input())

arr=[]
for i in range(n):
    [a,b] = map(int,input().split())
    arr.append([a,b])
    
arr = sorted(arr)

for i in range(n):
    printarr[i][0], arr[i][1])

#n 입력하고, n만큼 좌표입력
#좌표입력받으면 정렬 수행
#x좌표가 같으면 y좌표가 증가하는 순서대로 정렬 후 출력
#입력받은 수를 list로 만들고 sorted로 정렬 후 출력
