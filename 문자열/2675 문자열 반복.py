n = int(input())

for _ in range(n):
    cnt, word = input().split()
    for x in word:
        print(x*int(cnt), end='')  
    print()  


#문제
문자열 S를 입력받은 후에, 각 문자를 R번 반복해 새 문자열 P를 만든 후 출력하는 프로그램을 작성하시오. 즉, 첫 번째 문자를 R번 반복하고, 두 번째 문자를 R번 반복하는 식으로 P를 만들면 된다. S에는 QR Code "alphanumeric" 문자만 들어있다.

QR Code "alphanumeric" 문자는 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ\$%*+-./: 이다.


#해설
숫자와 문자열을 입력받으면 문자열의 문자를 각각 분리해 입력받은 숫자만큼 반복해서 출력. 출력할 때는 공백,기호 없이 문자를 붙여서 출력해야함
end='' -> 빈 문자열인 ''만 입력해서 옆으로 붙여서 출력되게함

첫줄에서 n을 입력받으면 n만큼 for문을 반복
두번째 for문 에서 입력받은 문자열을 분리해 변수로 선언

x변수를 cnt만큼 반복하기 위해 x * int(cnt) 사용

