a = int(input())
b = int(input())
arr_b = [int(i) for i in str(b)]
arr_b.reverse()

for i in range(len(arr_b)):
    print(a*arr_b[i])
print(a*b)


#b값을 문자열로 변환한 후 앞에서 한글자씩 배열에 넣음
