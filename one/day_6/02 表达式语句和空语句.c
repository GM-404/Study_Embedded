#include <stdio.h>



int main(int argc, char const *argv[])
{
	
	;	//C语言标准称为空语句  ;  不会执行任何操作但是尽量避免（不规范）
	;
	;
	;
	;

	int a = 10;
	int b = 20;

	printf("a+b = %d\n", a+b);

	int sum = 0;

	sum = a+b;;	//编译不会报错，因为使用了两条语句  表达式语句 + 空语句

	printf("sum = %d\n", sum);

	return 0;
}

