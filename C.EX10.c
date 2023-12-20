#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

/* 函數聲明 */
void printarow(int row, int cols, int arr[8][8]);

int main() {
    int arr1[8][8];
    int i, j, rows, cols;

    printf("請輸入行和列的數量（最多 8 行最多 8 列）\n");
    scanf("%d %d", &rows, &cols);

    if (rows > 8 || cols > 8) {
        printf("錯誤 - 行或列的最大值為 8\n");
    } else {
        printf("請輸入陣列\n");
        for (i = 0; i < rows; i++) {
            for (j = 0; j < cols; j++) {
                scanf("%d", &arr1[i][j]);
            }
        }

        printf("您的陣列是 \n");
        for (i = 0; i < rows; i++) {
            for (j = 0; j < cols; j++) {
                printf("%d ", arr1[i][j]);
            }
            printf("\n");
        }
    }

    // 調用函數，分別輸出第二行和第一行
    printarow(2, cols, arr1); /* 假設至少有 2 行，呼叫函數輸出第二行 */
    printf("\n");
    printarow(1, cols, arr1); /* 呼叫函數輸出第一行 */
    printf("\n");

    return 0;
}

/* 函數實現 */
void printarow(int row, int cols, int arr[8][8]) {
    int j;
    printf("第 %d 行是 ", row);
    for (j = 0; j < cols; j++) {
        printf("%d ", arr[row - 1][j]);
    }
}
