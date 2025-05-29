#include <stdio.h>


struct demo
{
	int  a;
	char b;
	long c;
	char buf1[5];
	int  d;
	char buf2[0]; //零长数组，可以利用该数组区访问结构体中的成员
};


int main(int argc, char const *argv[])
{
	
	/*注意：当数组的内存一旦分配，则不会因为变量的值发生变化导致数组长度变化*/

	int cnt = 0; //定义整型变量

	printf("please input cnt value:");
	scanf("%d",&cnt);		//5

	int buf[cnt];//定义整型数组，数组容量由变量cnt的值决定,C99标准中把这种数组叫做柔性数组 

	printf("please input cnt value:");
	scanf("%d",&cnt);		//10

	
	/* 注意：这种数组长度为0，则称为零长数组，是不会分配内存的，但是用户是可以访问的 */
	int buf[0];



	return 0;
}