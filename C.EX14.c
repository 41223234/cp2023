#include <stdio.h>

int main() {
    int a = 64;     // 十進制表示法
    int b = 0x40;   // 十六進制表示法
    long c = 64L;   // 使用 L 表示長整數

    // 使用 printf 函數輸出變數的值
    printf("%d, %d, %ld", a, b, c);

    return 0;
}
