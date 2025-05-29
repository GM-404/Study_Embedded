#include <stdio.h>

int main(int argc, char const *argv[])
{
	int data = 0;

	printf("请输入一个数字");
	scanf("%d",&data);

	//用户需要根据输入的数字来选择执行不同的功能
	switch( data )  
	{
		case 0: printf("输入的数字是0\n");  break;
		case 1: printf("输入的数字是1\n");  break;
		case 2: printf("输入的数字是2\n");  break;
		case 3: printf("输入的数字是3\n");  break;
		case 4: printf("输入的数字是4\n");  break;
		default:printf("输入的数字不符合范围\n");
	}



	return 0;
	
}