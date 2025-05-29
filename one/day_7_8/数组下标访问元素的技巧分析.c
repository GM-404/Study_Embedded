
#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	//普通的数组的定义规则 buffer是缓冲区的意思，一般用于对数组进行命名
	int a;
	int
	char buf1[11]; //[表达式]   表达式可以是整型常量   

	buf1[0] = 'h';
	buf1[1] = 'e';
	buf1[2] = 'l';
	buf1[3] = 'l';
	buf1[4] = 'o';

	5[buf1] = 'w';
	6[buf1] = 'o';
	7[buf1] = 'r';
	8[buf1] = 'l';
	9[buf1] = 'd';

	buf1[10]= '\0';


	printf("%s\n", buf1); //数组名在C语言标准中是指向数组第一个元素的地址

	return 0;
}