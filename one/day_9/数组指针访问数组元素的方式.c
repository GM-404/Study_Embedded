
#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	int buf[10] = {1,2,3,4,5,6,7,8,9,10};

	for (int i = 0; i < 10; ++i)
	{
		printf("buf[%d] = %d\n",i,buf[i]);  //buf[0] = 1  buf[1] = 2
	}

	int *p = buf; //指针指向数组的第一个元素的地址

	//数组下标
	buf[0] = 120;
	printf("buf[0] = %d\n",buf[0]);

	//指针访问  p == buf   *p == *buf == *(buf+0) == buf[0]
	*(p + 1) = 130;

	printf("buf[1] = %d\n",buf[1]);

	return 0;
}