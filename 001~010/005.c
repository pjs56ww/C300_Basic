/*
    title: 조건문 개념 배우기(if ~ else)
*/
#include <stdio.h>

int main()
{
    int x;
    int y;

    x = 20;
    y = 10;

    if(x > y)
    {
        printf("x의 값이 y보다 큽니다.");
    }
    else
    {
        printf("x의 값이 y보다 작거나 같습니다.");
    }

    return 0;
}