/*******************************************************************
 *
 *	file name:	demo.c
 *	author	 :  cecelmx@126.com
 *	date	 :  2024/04/08
 *	function :  构造一个新的数据类型，数据类型中可以包含其他类型!!!
 * 	note	 :  None
 *
 *	CopyRight (c)  2023-2024   cecelmx@126.com   All Right Reseverd
 *
 * *****************************************************************/
#include <stdio.h>
#include <stdlib.h>

// 比如想要存储一个学生的信息(学生姓名+学生学号+学生年龄+学生性别),结构体类型不占内存

struct studentinfo
{
	char name[128];	  // 学生姓名,该成员属于结构体类型的一部分，不占内存空间
	long number;	  // 学生学号
	unsigned int age; // 学生年龄
	char sex[20];	  // 学生性别
} study;

int main(int argc, char const *argv[])
{

	// 定义一个结构体类型的变量
	struct studentinfo demo; // 此时变量demo会得到内存空间，才可以访问变量中的成员

	// 可以通过后缀运算符.来访问结构体变量中的成员
	demo.age = 18;

	printf("demo.age = %d\n", demo.age);

	// 定义一个指针变量指向该结构体类型的空间(堆空间地址 or 变量地址)
	struct studentinfo *p = &demo;

	// 重点关注
	p->age = 20;

	printf("demo.age = %d\n", demo.age);

	// 重点关注
	(*p).age = 25;

	printf("demo.age = %d\n", demo.age);

	(&demo)->age = 30;
	printf("demo.age = %d\n", demo.age);

	return 0;
}
