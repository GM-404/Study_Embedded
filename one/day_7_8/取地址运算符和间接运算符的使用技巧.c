#include <stdio.h>

int main(int argc, char const *argv[])
{
	//申请内存时可以把操作系统提供的存储单元的编号可以进行命名
	int data;

	//对变量赋值  &data 可以得到变量名data对应的存储单元的地址  *(&data) 可以得到该地址的值  只不过*&互相抵消
	data = 20;  

	printf("data = %d\n",data);

	*&data = 30;

	printf("data = %d\n",data);

	return 0;
}