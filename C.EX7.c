#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* if-else if-else 操作的範例 */
int main() {
    int this_is_a_number;

    // 輸入介於1到10之間的整數
    printf("請輸入一個介於1到10之間的整數：\n");
    scanf("%d", &this_is_a_number);

    // 檢查輸入的數字是否小於6
    if (this_is_a_number < 6)
        printf("這個數字小於6；\n");

    // 再次輸入介於10到20之間的整數
    printf("請輸入一個介於10到20之間的整數：\n");
    scanf("%d", &this_is_a_number);

    // 使用 else if 和 else 進行多條件檢查
    if (this_is_a_number < 16) {
        printf("這個數字小於16\n");
    } else if (this_is_a_number == 20) {
        printf("這個數字等於20\n");
    } else {
        printf("這個數字大於15\n");
    }

    return 0;
}
