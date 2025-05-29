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


enum
{
	Monday=1,	//第一个元素未被初始化，所以该元素的值默认为0
	Tuesday,	//当前元素的值 = 上一个元素的值+1
	Wednesday=3,//对当前元素的值进行初始化
	Thursday,	//当前元素的值 = 上一个元素的值+1
	Friday = 5,
	Saturday,
	Sunday
};


int main(int argc, char const *argv[])
{
	
	int weekday = Tuesday;

	switch(weekday)
	{
		case Monday		: printf("星期1\n");break;
		case Tuesday	: printf("星期2\n");break;
		case Wednesday	: printf("星期3\n");break;
		case Thursday	: printf("星期4\n");break;
		case Friday		: printf("星期5\n");break;
		case Saturday	: printf("星期6\n");break;
		case Sunday		: printf("星期7\n");break;
	}

	return 0;
}
