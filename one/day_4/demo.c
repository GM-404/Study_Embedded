
#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{

	printf("%-10d%d\n", 100, 200); // 100_______200    10指的是字段宽度。负号表示左对齐

	printf("%*d%d\n", 10, 20, 30); // * 在格式化字符串中可以理解为占位符 表示列宽   此时函数第二个参数必须是整数，提供给*    ________2030

	printf("%f\n", 3.14);		// 3.140000  如果不指定精度，则默认精度为6位
	printf("%.f\n", 3.14);		// 3   	   如果选择使用精度，但是不去指定精度的位数，只有 . 则精度为0
	printf("%.2f\n", 3.145926); // 3.15      如果选择使用精度，但是指定精度的位数，输出的数值会进行四舍五入

	printf("%#hhx\n", 0x12345678); // 0x12 or 0x78 ?  //X86  ARM

	float a = 3.1415926;
	double b = 3.1415926;
	printf("%f\n", a);	// 3.141593  单精度 3.1415925
	printf("%lf\n", b); // 3.141593  双精度 3.1415926000000001

	printf("%p\n", &a); // C语言提供了一个 & 取地址符   &变量名 --> 得到变量的地址 -->得到变量对应的存储单元的编号

	printf("100%%\n"); // %%可以把%作为普通字符

	printf("hello\nworld\n");
	printf("hello\tworld\n"); // hello    world

	printf("\"hellowrold\"\n"); // ""作为普通字符输出  只需要 \" hello world \"

	printf("\"hello\" \
	\"world\"  \
	\"hi\"\n"); //"hello""world""hi"

	return 0;
}
