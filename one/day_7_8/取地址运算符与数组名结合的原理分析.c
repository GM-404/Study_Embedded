#include <stdio.h>

int main(int argc, char const *argv[])
{
	//1.定义一个整型数组
	int buf[5];

	printf("%p\n",buf);

	//printf("%p\n",buf+1);

	printf("%p\n",&buf+2);   //21  40

	return 0;
}