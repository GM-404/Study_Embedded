#include <stdio.h>

int main(int argc, char const *argv[])
{

label1:

	printf("hello\n");


	for (int i = 0; i < 5; ++i)
	{
		printf("i = %d\n",i); 	//i=0
		goto label1;			//无条件跳转，尽量避免goto语句跳转到程序之前的代码块
	}


label2:

	printf("world\n");


	return 0;
}
