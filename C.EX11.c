#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 除法計算兩個浮點數的商 */
int main() {
    float this_is_a_number1, this_is_a_number2, total;

    // 提示用戶輸入一個數字
    printf("請輸入一個數字：\n");
    scanf("%f", &this_is_a_number1); /* 讀取輸入的數字 */
    printf("您輸入了 %f\n", this_is_a_number1);

    // 提示用戶輸入另一個數字
    printf("請輸入另一個數字：\n");
    scanf("%f", &this_is_a_number2); /* 讀取輸入的數字 */
    printf("您輸入了 %f\n", this_is_a_number2);

    // 計算兩個數字的商
    total = this_is_a_number1 / this_is_a_number2;

    // 輸出商
    printf("商為 %f\n", total);

    return 0;
}
