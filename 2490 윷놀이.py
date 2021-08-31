for i in range(3):
    arr = list(map(int, input().split()))
    if arr.count(0) == 1:
        print("A")
    elif arr.count(0) == 2:
        print("B")
    elif arr.count(0) == 3:
        print("C")   
    elif arr.count(0) == 4:
        print("D")
    else:
        print("E") 

#값을 리스트로 받고, '배'의 개수를 count이용해 0이 몇번 나왔는지 구함
#배(0) == 1,2,3,4 & 그외 로 나눔