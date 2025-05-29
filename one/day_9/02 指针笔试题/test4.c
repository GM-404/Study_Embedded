#include <stdio.h>
int main()
{
	// 是一个指针数组，数组有4个元素，每个元素都是一个地址，地址下是字符串
	char *c[] = {"ENTER", "NEW", "POINT", "FIRST"}; // sizeof(c) = 16   32bit系统下地址是4字节

	// cp[] 是一个数组，数组有4个元素，每个元素的类型都是 char **,所以每个元素的类型都是指针，指针指向的地址下还是一个地址  ，这个地址下存储的才是字符
	char **cp[] = {c + 3, c + 2, c + 1, c}; // { "FIRST","POINT","NEW","ENTER"}

	//*cpp 是一个指针变量  cpp指向数组cp的地址
	char ***cpp = cp;

	// 解释：
	// ++cpp 使cpp指向cp[1]（即c+2，指向"POINT"）
	// *cpp 得到 c+2（char** 类型）
	// **cpp 得到 *(c+2)，即"POINT"的首地址，输出"POINT"
	printf("%s\n", **++cpp);
	// 解释：
	// ++cpp 使cpp指向cp[2]（即c+1，指向"NEW"）
	// *++cpp 得到 c+1
	// --*++cpp 使c+1变为c（即指向"ENTER"）
	// *--*++cpp 得到"ENTER"的首地址
	// *--*++cpp + 3 从"ENTER"的第4个字符开始，输出"ER"
	printf("%s\n", *--*++cpp + 3);
	// 解释：
	// cpp[-2] 等价于 *(cpp-2)，即cp[0]（指向"FIRST"）
	// *cpp[-2] 得到"FIRST"的首地址
	// *cpp[-2] + 3 从"FIRST"的第4个字符开始，输出"ST"
	printf("%s\n", *cpp[-2] + 3);
	// 解释：
	// cpp[-1] 等价于 *(cpp-1)，即cp[1]（指向"POINT"）
	// cpp[-1][-1] 等价于 *(*(cpp-1)-1)，即*(c+2-1)，即"NEW"
	// cpp[-1][-1] + 1 从"NEW"的第2个字符开始，输出"EW"
	printf("%s\n", cpp[-1][-1] + 1);
	return 0;
}
