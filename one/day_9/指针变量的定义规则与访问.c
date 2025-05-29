
#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	int  data = 100;

	int  *p2 =  NULL; //防止野指针，目的提高程序可靠性

	p2 = &data;		  // p2 ==> &p2 ==> *(&p2) == *&可以互相抵消 == p2

	data=10;

	printf("data = %d\n",data); //10  通过变量访问

	*p2 = 20;  //  p2 == (&data) ==> *(&data) == data == *p2 都表示变量data中的值

	printf("data = %d\n",*p2); //20  通过变量访问

	*&data = 30;

	printf("data = %d\n",data); //30  通过变量访问

	return 0;
}