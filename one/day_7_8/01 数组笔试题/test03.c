#include <stdio.h>

int main()
{
    char arr[] = "abcdef";

    /* 1 */ printf("%d\n", sizeof(arr));         // 7
    /* 2 */ printf("%d\n", sizeof(arr + 0));     // 8
    /* 3 */ printf("%d\n", sizeof(*arr));        // 1
    /* 4 */ printf("%d\n", sizeof(arr[1]));      // 1
    /* 5 */ printf("%d\n", sizeof(&arr));        // 8
    /* 6 */ printf("%d\n", sizeof(&arr + 1));    // 8
    /* 7 */ printf("%d\n", sizeof(&arr[0] + 1)); // 8

    /* 1 */ printf("%s\n", arr);        // abcdef
    /* 2 */ printf("%s\n", arr + 0);    // abcdef
    /* 3 */ printf("%p\n", (char)*arr); // 输出第一个字符的地址
    /* 3 */ printf("%c\n", *arr);       // a
    /* 4 */ printf("%c\n", arr[1]);     // b
    /* 5 */ printf("%p\n", &arr);       // 输出数组的地址
    /* 6 */ printf("%p\n", &arr + 1);   // 输出下一个数组的地址

    return 0;
}
