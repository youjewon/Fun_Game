#include<stdio.h>
#아무튼 2진수 369 게임 해볼거임 나중에 다른 게임도 만들어 보자


print('게임을 시작합니다.')

str =  "0b"
clap = "짝"
cnt = 1
while(1) :
    data = input()
    tmp = str + data
    if(cnt % 3 == 0):
        if(clap == data):
            cnt +=1
        else :
            print("fail")
            print("cnt is " , cnt , "you should have claping");
            break
    else :
        if(tmp == bin(cnt)):
            cnt+=1
        else :
            print("fail")
            print("cnt is " , cnt , " and binary is " , bin(cnt));
            break

