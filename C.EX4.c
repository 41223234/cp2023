#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 2D 陣列測試的範例 */
int main()
{
    int arr1[7][8]; /* 2D 陣列 */
    int i, j, k, l;

    // 提示用戶輸入行和列的數量，限制最大為 7 行和 8 列
    printf("請輸入行和列的數量（最多 7 行，最多 8 列）：\n");
    scanf("%d %d", &k, &l);

    // 檢查行和列的數量是否超出範圍
    if (k > 7 || l > 8)
    {
        printf("錯誤 — 行的最大值為 7，列的最大值為 8。\n");
    }
    else
    {
        // 提示用戶輸入陣列元素值
        printf("請輸入陣列元素值：\n");
        for (i = 0; i < k; i++)
        {
            for (j = 0; j < l; j++)
            {
                scanf("%d", &arr1[i][j]);
            }
        }

        // 顯示輸入的陣列
        printf("您輸入的陣列是：\n");
        for (i = 0; i < k; i++)
        {
            for (j = 0; j < l; j++)
            {
                printf("%d ", arr1[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
