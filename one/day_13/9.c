/*******************************************************************
 *
 *	file name:	demo.c
 *	author	 :  cecelmx@126.com
 *	date	 :  2024/04/08
 *	function :
 * 	note	 :  None
 *
 *	CopyRight (c)  2023-2024   cecelmx@126.com   All Right Reseverd
 *
 * *****************************************************************/
#include <stdio.h>
#include <stdlib.h>

// 32bit系统下默认是遵循4字节对齐的，所以是以空间换时间
/*
struct studentinfo
{
	char name[10];
	int *p;
	short b;
	char c;
	int  a;
	unsigned int age;
};
*/

// C语言标准中的预处理指令#pragma pack(n) 用于设置字节对齐，所以是以时间换空间

#pragma pack(1) // 取消字节对齐

struct studentinfo
{
	char name[10];
	int *p;
	short b;
	char c;
	int a;
	unsigned int age;
};

#pragma pack()	// 恢复字节对齐
#pragma pack(1) // 取消字节对齐

int main(int argc, char const *argv[])
{
	printf("size = %ld bytes\n", sizeof(struct studentinfo));

	return 0;
}
