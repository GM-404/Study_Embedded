#include <stdio.h>
int main()
{
    int aa[2][5] = { {1, 2, 3, 4, 5} , {6, 7, 8, 9, 10} } ; // aa[2]  int[5]

    int* ptr1 = (int*)(&aa + 1);  // &aa+1 ==> 向后偏移10*4字节  在最后一个元素的后面

    int* ptr2 = (int*)(*(aa + 1));// *(aa+1) == aa[1] == 数组中第二个匿名数组

                      //10         //5 
    printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1)); 
    return 0;
}

