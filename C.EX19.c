#include <stdio.h>

void main() {
    int a;

    // 將 a 設為 3，然後對其進行邏輯 NOT 運算
    a = 3;
    printf("%d\n", !a);  // 非（NOT）運算，輸出 0

    // 將 a 設為 0，然後對其進行邏輯 NOT 運算
    a = 0;
    printf("%d\n", !a);  // 非（NOT）運算，輸出 1
}
