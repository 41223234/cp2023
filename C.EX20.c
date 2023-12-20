#include <stdio.h>

void main() {
    // 1 AND 3，兩個運算元都為真，結果為真（1）
    printf("%d\n", 1 && 3);

    // 0 AND 0，其中一個運算元為假，結果為假（0）
    printf("%d\n", 0 && 0);

    // 2 AND 2，兩個運算元都為真，結果為真（1）
    printf("%d\n", 2 && 2);
}
