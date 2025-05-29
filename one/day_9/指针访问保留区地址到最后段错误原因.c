#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	int *p = (int *)0x08040000; //0x08040000是保留区的地址，用户没有权限访问


	*p = 100;  // p == 0x08040000 ==> *p == *(0x08040000) ==> *p = 100 == *(0x08040000) = 100;

	printf("address = %d\n",*p); 


	return 0;
}