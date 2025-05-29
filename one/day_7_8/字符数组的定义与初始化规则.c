#include <stdio.h>
#include <strings.h>
#include <string.h>

int main(int argc, char const *argv[])
{

	//对字符数组中的元素进行单独赋值  是可靠的
	char buf1[5] = {'a','b','c','d','e'};


	//"abcde"是字符串常量，系统会在"abcde"的末尾自动添加'\0'作为结束标志
	char buf2[5] = "abcde";  //是不可靠的，因为已经出现数组越界的情况，因为数组的容量是小于字符串常量的字符数量 


	return 0;
}

