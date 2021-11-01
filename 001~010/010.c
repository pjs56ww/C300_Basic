/*
    title: 컴파일 개념 배우기
*/
#include <stdio.h>

int main()
{
    // int i;
    int hap = 0;

    for(i = 1; i <= 10; i = i + 1) // 010.c:11:9: error: use of undeclared identifier 'i'
    {
        hap = hap + i // 010.c:13:22: error: expected ';' after expression
    }

    printf("1부터 10까지의 합: %d", hap);

    return 0;
}