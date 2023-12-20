#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 使用 switch 陳述式對字符進行處理的範例 */
int main()
{
    char this_is_a_character;

    // 提示用戶輸入字符 'a', 'b', 'c', 'd' 或 'e'
    printf("請輸入字符 a、b、c、d 或 e：\n ");
    scanf(" %c", &this_is_a_character); // 注意加上空格，以避免跳過上一次輸入的換行符號

    // 使用 switch 陳述式根據輸入的字符執行相應的動作
    switch (this_is_a_character)
    {
    case 'a':
        printf("你輸入了 'a'\n");
        break;
    case 'b':
        printf("你輸入了 'b'\n");
        break;
    case 'c':
        printf("你輸入了 'c'\n");
        break;
    case 'd':
        printf("你輸入了 'd'\n");
        break;
    case 'e':
        printf("你輸入了 'e'\n");
        break;
    default:
        printf("預設情況\n");
    }

    return 0;
}
