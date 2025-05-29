#include <stdio.h>

// 假设在64bit系统下计算，64bit系统下的存储单元的编号是64bit的（8字节）
// 在 64 位平台，指针大小为 8 字节，char 大小为 1 字节
int main()
{

    char arr[] = {'a', 'b', 'c', 'd', 'e', 'f', '\0'}; // 字符数组

    /* 1 */ printf("%d\n", sizeof(arr));         // 7
    /* 2 */ printf("%d\n", sizeof(arr + 0));     // 8
    /* 3 */ printf("%d\n", sizeof(*arr));        // 1
    /* 4 */ printf("%d\n", sizeof(arr[1]));      // 1
    /* 5 */ printf("%d\n", sizeof(&arr));        // 8
    /* 6 */ printf("%d\n", sizeof(&arr + 1));    // 8
    /* 7 */ printf("%d\n", sizeof(&arr[0] + 1)); // 8

    /* 1 */ printf("%s\n", arr);        //
    /* 2 */ printf("%s\n", arr + 0);    //
    /* 3 */ printf("%c\n", *arr);       // a
    /* 4 */ printf("%c\n", arr[1]);     // b
    /* 5 */ printf("%p\n", &arr);       //
    /* 6 */ printf("%p\n", &arr + 1);   //
    /* 7 */ printf("%c\n", *(arr + 1)); // b
    return 0;
}