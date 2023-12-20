#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 2D 數組測試的範例 */
int main() {
    int arr1[7][8];
    int i, j, k, l;

    printf("請輸入行和列的數量（最多7行，最多8列）\n");
    scanf("%d %d", &k, &l);

    if (k > 7 || l > 8) {
        printf("錯誤：超過最大7行或8列。\n");
    } else {
        printf("請輸入數組：\n");
        for (i = 0; i < k; i++) {
            for (j = 0; j < l; j++) {
                scanf("%d", &arr1[i][j]);
            }
        }

        printf("你的數組是：\n");
        for (i = 0; i < k; i++) {
            for (j = 0; j < l; j++) {
                printf("%d ", arr1[i][j]);
            }
            printf("\n");
        }
    }

    printf("數組的第一行是：\n");
    for (j = 0; j < l; j++) {
        printf("%d ", arr1[0][j]);
    }
    printf("\n");

    return 0;
}
