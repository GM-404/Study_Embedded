#include <stdio.h>
int main()
{		
			     				
    int a[5] = { 1, 2, 3, 4, 5};

    int* ptr = (int*)(&a + 1);  // &a + 1  ==> &a 表示数组的地址 + 1 ==> 向后偏移整个数组的大小

    //       2  5    *(a+1) == a[1]  *(ptr - 1) == 数组中最后一个元素的地址 == &a[4]  == *(&a[4]) == a[4]
    printf("%d,%d\n", *(a + 1), *(ptr - 1));      
    return 0;
}

