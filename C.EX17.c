#include <stdio.h>

int main() {
    int a = 10, b = 5;

    // 比較運算符的使用
    printf(" a == b is %d \n", a == b);   // 等於
    printf(" a > b is %d \n", a > b);     // 大於
    printf(" a < b is %d \n", a < b);     // 小於
    printf(" a >= b is %d \n", a >= b);   // 大於等於
    printf(" a <= b is %d \n", a <= b);   // 小於等於
    printf(" a != b is %d \n", a != b);   // 不等於
    printf("\n");

    // 修改 b 的值
    b = 10;

    // 再次進行比較
    printf(" a == b is %d \n", a == b);
    printf(" a > b is %d \n", a > b);
    printf(" a < b is %d \n", a < b);
    printf(" a >= b is %d \n", a >= b);
    printf(" a <= b is %d \n", a <= b);
    printf(" a != b is %d \n", a != b);

    return 0;
}
