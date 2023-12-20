#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int this_is_a_number1, this_is_a_number2, total;

    // 請求用戶輸入一個整數
    printf("請輸入一個整數：\n ");
    scanf("%d", &this_is_a_number1); // 讀取輸入的數字
    printf("您輸入了 %d\n", this_is_a_number1);

    // 請求用戶輸入另一個整數
    printf("請輸入另一個整數：\n");
    scanf("%d", &this_is_a_number2); // 讀取輸入的數字
    printf("您輸入了 %d\n", this_is_a_number2);

    // 計算兩個數字的總和
    total = this_is_a_number1 + this_is_a_number2;

    // 輸出總和
    printf("總和為 %d\n", total);

    return 0;
}
