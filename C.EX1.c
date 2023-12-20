#include <stdio.h>

/* 讀取並顯示一個字符 */
int main() {
    char c;

    // 提示用戶輸入字符
    printf("請輸入一個字符: ");

    // 使用 getchar 函數讀取一個字符
    c = getchar();

    // 顯示用戶輸入的字符
    printf("輸入的字符為: ");

    // 使用 putchar 函數顯示字符
    putchar(c);

    return 0;
}
