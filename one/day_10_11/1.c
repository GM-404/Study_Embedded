/*******************************************************************
 *
 *	file name:	demo.c
 *	author	 :  cecelmx@126.com
 *	date	 :  2024/04/02
 *	function :  设计函数，实现传递两个整数并输出其中较大的数
 * 	note	 :  None
 *
 *	CopyRight (c)  2023-2024   cecelmx@126.com   All Right Reseverd
 *
 * *****************************************************************/

#include <stdio.h>

/*******************************************************************
 *
 *	函数名称:	func
 *	函数功能:   输出两个整数中较大的整数
 * 	函数参数:
 *  				@a :
 *  				@b :
 *   返回结果:
 * 	注意事项:   None
 * 	函数作者:   cecelmx@126.com
 *	创建日期:   2024/04/02
 *	修改历史:
 *	函数版本:	V1.0
 * *****************************************************************/
int func(int *a, int *b)
{
	// 函数的形参是在调用函数时才会得到内存，在函数结束时内存会被释放
	*a = 30;
	*b = 40;
}

char *func2(void);
int main(int argc, char const *argv[])
{
	int sum = 0;

	// 变量的原则“先定义，后使用”
	int c = 10;
	int d = 20;

	printf("c = %d\n", c); // 10
	printf("d = %d\n", d); // 20

	// a和b是变量，是有内存单元,传参时是把实参的地址进行传递，是双向的
	func(&c, &d);

	printf("c = %d\n", c); // 30
	printf("d = %d\n", d); // 40

	char *p = NULL;
	p = func2(); // 利用指针变量接收函数的返回值
	return 0;
}
char *func2(void)
{
	// 函数的返回值是在函数结束时才会得到内存，函数结束后内存会被释放
	static char buf[10] = "hello";
	return buf;
}