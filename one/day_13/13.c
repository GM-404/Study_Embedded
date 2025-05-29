/*******************************************************************
*
*	file name:	demo.c
*	author	 :  cecelmx@126.com
*	date	 :  2024/04/08
*	function :  判断当前机器是大端还是小端，必须使用联合体来进行判断
* 	note	 :  None
*
*	CopyRight (c)  2023-2024   cecelmx@126.com   All Right Reseverd 
*
* *****************************************************************/
#include <stdio.h>
#include <stdlib.h>


//用户自定义的联合体类型
union 
{
	int  a;
	char b;
}data;


int main(int argc, char const *argv[])
{
	
	//对联合体的成员a进行赋值
	data.a = 0x12345678;

	if (0x12 == data.b)
		printf("Big-Endian\n");
	else
		printf("Little-Endian\n");

	return 0;
}
