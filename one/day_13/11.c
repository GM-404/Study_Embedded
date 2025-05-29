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



typedef  unsigned int  uint32_t;  //对unsigned int 数据类型起了别名



//用户自定义的结构体类型,用户可以选择给该结构体类型起一个别名
typedef struct studentinfo
{
	char name[10]; 		
	int *p;
	short b;
	char c;
	int  a;
	unsigned int age;		
}StuInfo_t;



void func3(StuInfo_t *a)
{
	printf("age = %d\n",a->age);  //通过指针访问结构体中的成员

	printf("age = %d\n",(*a).age);//通过变量访问结构体中的成员
}


int main(int argc, char const *argv[])
{
	
	StuInfo_t data; //定义结构体变量


	func3(&data);	//结构体变量地址作为参数


	
	return 0;
}
