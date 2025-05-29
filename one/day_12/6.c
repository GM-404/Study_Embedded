
/*******************************************************************
*
*	file name:	demo.c
*	author	 :  cecelmx@126.com
*	date	 :  2024/04/07
*	function :  实现一个字符串的逆序输出       考查递归思想解决问题
* 	note	 :  None
*
*	CopyRight (c)  2023-2024   cecelmx@126.com   All Right Reseverd 
*
* *****************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool func(char *ptr)
{
	//写好终止条件，防止死循环出现，导致函数频繁调用出现栈溢出现象
	if ('\0' == *ptr)
	{
		return false; 
	}

	func(ptr+1);

	printf("%c",*ptr);

}

int main(int argc, char const *argv[])
{	
	
	//1.定义指针变量来指向申请的堆内存
	char *ptr = NULL;

	//2.申请堆内存并对申请的堆内存进行初始化  初始化的值为'\0'
	ptr = (char *)calloc(1,100);
	if (NULL == ptr)
	{
		perror("calloc heap memory failed!");
		return -1;
	}

	//3.通过键盘输入一个字符串，存储到堆内存
	printf("please input a string:");
	scanf("%s",ptr);

	//4.调用递归函数实现堆内存字符串的逆序输出
	func(ptr);
	printf("\n");
	//5.释放堆内存
	free(ptr);
	ptr = NULL;

	return 0;
}