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

// 用户自定义的联合体类型
union studentinfo
{
	char name[10];
	int *p;
	short b;
	char c;
	int a;
	unsigned int age;
};

int main(int argc, char const *argv[])
{

	union studentinfo data; // 定义联合体变量

	// 联合体中的每个成员都是共用一块相同的内存，所以内存大小等于宽度最大的成员
	printf("data size = %ld\n", sizeof(data));

	data.c = 0x56;
	printf("data.c = %#x\n", data.c);

	data.b = 0x1234;

	printf("data.c = %#x\n", data.c);

	// 联合体中的每个成员都是共用一块相同的内存，所以每个成员的地址应该是一致的
	printf("data.b address = %p\n", &(data.b));
	printf("data.c address = %p\n", &(data.c));

	return 0;
}
