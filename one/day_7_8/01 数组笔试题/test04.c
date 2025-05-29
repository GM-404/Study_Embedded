#include <stdio.h>

// 64bit

int main()
{
    int a[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}}; // 二维数组

    /* 1 */ printf("%d\n", sizeof(a));            // 48  a的大小，为int型，sizeof(int) = 4，所以sizeof(a) = 4 * 3 * 4 = 48
    /* 2 */ printf("%d\n", sizeof(a[0][0]));      // 4   a[0][0]是int型，所以sizeof(int) = 4
    /* 3 */ printf("%d\n", sizeof(a[0]));         // 16  a[0]是4个int型，所以为16
    /* 4 */ printf("%d\n", sizeof(a[0] + 1));     // 8   为指向指向第一行的第二个元素的指针
    /* 5 */ printf("%d\n", sizeof(*(a[0] + 1)));  // 4   是第一行第二个元素的值（a[0][1]）
    /* 6 */ printf("%d\n", sizeof(a + 1));        // 8   为指向a数组地址下一个的指针
    /* 7 */ printf("%d\n", sizeof(*(a + 1)));     // 16  为a数组下一个指针指向的值
    /* 8 */ printf("%d\n", sizeof(&a[0] + 1));    // 8   指向a[1]的指针
    /* 9 */ printf("%d\n", sizeof(*(&a[0] + 1))); // 16  a[1]
    /* 10 */ printf("%d\n", sizeof(*a));          // 16  *a 等价于 a[0]，是第一行的数组，不是指针，大小为 16 字节。
    /* 11 */ printf("%d\n", sizeof(a[3]));        // 16  a[3] 虽然越界，但 sizeof 只关心类型（int[4]），结果仍为 16 字节

    /* 1 */ printf("%p\n", (void *)a);        // a 的地址
    /* 2 */ printf("%d\n", a[0][0]);          // a[0][0]
    /* 3 */ printf("%p\n", a[0]);             // a[0]的首地址
    /* 4 */ printf("%p\n", (void *)a[0] + 1); // a[0][1]的地址
    /* 5 */ printf("%d\n", *(a[0] + 1));      // a[0][1]
    /* 6 */ printf("%p\n", (void *)a + 1);    // a + 1 是指向第二行的指针（int(*)[4]），需用 %p。
    /* 7 */ printf("%p\n", *(a + 1));         // *(a + 1) 是第二行（int[4]），隐式转换为指向首元素的指针（int*），需用 %p
    /* 8 */ printf("%p\n", &a[0] + 1);        // &a[0] + 1 是指向第二行的指针，需用 %p
    /* 9 */ printf("%p\n", *(&a[0] + 1));     // *(&a[0] + 1) 是第二行，隐式转换为指针，需用 %p
    /* 10 */ printf("%p\n", *a);              // *a 是第一行，隐式转换为指针，需用 %p
    /* 11 */ printf("%p\n", a[3]);            // 输出越界地址（但类型正确）
    return 0;
}