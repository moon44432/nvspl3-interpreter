# SEL Project

## 1. 언어 명세
[TBW]

## 2. 샘플 코드
### 2-1. 피보나치 수 출력하기
정수 `n`을 입력받으면 피보나치 수열의 `n`번째 항을 출력합니다.
```
func fib(x) if x < 3 then 1 else fib(x - 1) + fib(x - 2)

while 1 println(fib(input()))
```
#### 2-1-1. 메모이제이션 기법을 사용한 프로그램
메모이제이션 기법을 사용하여 큰 피보나치 수도 빠르게 계산합니다.
```
arr memo[1024]

func fib(x)
{
    if memo[x] then memo[x]
    else
    {
        if x < 3 then 1 
        else memo[x] = fib(x - 1) + fib(x - 2)
    }
}

while 1 println(fib(input()))
```
[TBW]

## 3. SEL 인터프리터
### 3-1. 사용법
`sel`은 SEL Interactive Shell을 실행합니다.  
`sel "filename.sel"`은 사용자가 작성한 SEL 스크립트 파일을 실행합니다.  
[TBW]

## 4. Visual Studio Code 지원
Visual Studio Code용 SEL 애드온을 지원합니다.  
[TBW]
