#include <stdio.h>

int main(int argc, char const *argv[])
{

	int a = 0;

	//设计死循环，防止程序退出,表达式遵循“非0即真”
	while( 1 )
	{
		//循环体，循环体一般结合复合语句{}一起使用
		a++;
	}


	int a = 0;

	//遵循“先执行，后判断”
	do {

		//循环体
		a++;

	}while( a > 0 );   // ;不可以省略


	//是死循环，因为如果表达式2省略，则系统会自动使用非0常量进行替换， 遵循“非0即真”
	for ( ; ; )
	{
		//循环体
	}


	int i = 0;
	for ( ; i < 10; )
	{
		printf("%d\n",i); //0
	}



	int i = 20;
	for (int i = 0; i < 10; ++i)
	{
		printf("%d\n",i);
	}


	int i = 10;
	
	while(i>0)
	{
		printf("i=%d\n",i);
		break;					//结束整个循环
	}


	int i = 10;
	
	while(i>0)
	{
		printf("i=%d\n",i);
		continue;				//结束本次循环
		printf("xxxx\n",i);
	}


	return 0;
}

