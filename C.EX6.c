#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/* 顯示字符陣列用法的程式 */
int main()
{
    char arr2[10]; /* 定義包含10個字符的陣列 */
    int i;

    printf("請輸入10個字符：\n");

    // 使用迴圈讀取使用者輸入的10個字符
    for (i = 0; i < 10; i++)
    {
        scanf(" %c", &arr2[i]); // 注意加上空格，以避免跳過上一次輸入的換行符號
    }

    printf("您輸入的10個字符是：\n");

    // 使用迴圈顯示字符陣列中的字符
    for (i = 0; i < 10; i++)
    {
        printf("%c ", arr2[i]);
    }

    printf("\n");

    return 0;
}
