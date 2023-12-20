#include <stdio.h>

/* 展示 goto 陳述式的範例 */
int main()
{
    int i, testvalue;
    testvalue = 2;

    for (i = 0; i < 10; i++)
    {
        if (testvalue == 2)
            goto error;
    }

    printf("正常退出 for 迴圈\n");

error:
    printf("testvalue 是 %d\n", testvalue);

    return 0;
}
