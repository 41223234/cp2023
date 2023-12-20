#include <stdio.h>

int main() {
    int i;

    // 提示用戶輸入一個整數
    printf("請輸入一個整數：");

    // 使用 scanf 函數讀取用戶輸入的整數並將其存儲到變數 i 中
    scanf("%d", &i);

    // 使用 printf 函數輸出變數 i 的值
    printf("輸入的數字是：%d", i);

    return 0;
}
