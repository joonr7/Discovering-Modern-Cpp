# 문제
[exercise2-1](../exercise2-1) 에,
- 이동 할당 연산자 작성.
- 복사 생성자는 default 로 정의.
- 3개의 계수를 받고, 다항식을 반환하는 함수 polynomial f(double c2, double c1, double c0)을 작성.
- 이동 할당 연산자에 메시지를 출력하거나 디버거 사용.

# 결과

```bsh
$ ./build/exercise2-2/exercise2-2
Set coefficient using vector
2th degree term: 3
1th degree term: 6
0th degree term: 9
0x7fffb53d13a0
 ---------------------------
Copy assignment operator
2th degree term: 3
1th degree term: 6
0th degree term: 9
p2 address: 0x7fffb53d13a0
cap2 address: 0x7fffb53d13c0
 ---------------------------
Copy constructor (default)
2th degree term: 3
1th degree term: 6
0th degree term: 9
p2 address: 0x7fffb53d13a0
ccp2 address: 0x7fffb53d13e0
 ---------------------------
Function Polynomial f
Set coefficient using vector
Copy assignment operator
2th degree term: 1
1th degree term: 2
0th degree term: 3
fp2 address: 0x7fffb53d1400
 ---------------------------
 ```

