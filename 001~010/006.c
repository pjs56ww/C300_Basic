/*
    title: 순환문 개념 배우기(for)
*/
#include <stdio.h>

int main()
{
    int i;
    int hap = 0;

    for(i = 1; i <= 10; i = i + 1)
    {
        hap = hap + i;
    }

    printf("1부터 10까지의 합: %d", hap);

    return 0;
}