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


//不打算创建新的结构体变量，只打算使用一次性的结构体变量访问结构体成员

struct 
{
	char name[10]; 		
	int *p;
	short b;
	char c;
	int  a;
	unsigned int age;		
}data1,*data2;


int main(int argc, char const *argv[])
{
	
	data1.b = 20;
	printf("data1.b = %d\n",data1.b);



	
	return 0;
}
