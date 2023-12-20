#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 函數聲明 */
void myfunction(int a, int b);

int first, second, third;

int main() {
    printf("請輸入第一個整數：");
    scanf("%d", &first);

    printf("請輸入第二個整數：");
    scanf("%d", &second);

    printf("請輸入第三個整數：");
    scanf("%d", &third);

    // 調用函數比較三對整數
    myfunction(first, second);
    myfunction(first, third);
    myfunction(second, third);

    return 0;
}

/* 函數實現 */
void myfunction(int a, int b) {
    // 比較兩個參數，輸出結果
    if (a > b)
        printf("%d 大於 %d\n", a, b);
    else if (a < b)
        printf("%d 大於 %d\n", b, a);
    else
        printf("%d 和 %d 相等\n", a, b);
}
