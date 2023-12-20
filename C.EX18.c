#include<stdio.h>

void main() {
    int a, b;
    a = 15;
    b = 1;

    // 位元 OR 運算 (a OR b)
    printf("%d \n", a | b);

    // 位元 AND 運算 (a AND b)
    printf("%d \n", a & b);

    // 位元 XOR 運算 (a XOR b)
    printf("%d \n", a ^ b);

    // 位元左移 1 位 (a 左移 1 位)
    printf("%d \n", a << 1);

    // 位元右移 1 位 (a 右移 1 位)
    printf("%d \n", a >> 1);

    // a 的補數運算 (~a)
    printf("%d \n", ~a);
}
