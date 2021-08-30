words = input()
if words == words[::-1]:
    print(1)
else:
    print(0)

#words[::-1] : 문자열을 거꾸로 바꿈
#입력받은 문자열과 거꾸로 바꾼 문자열이 같은지 비교