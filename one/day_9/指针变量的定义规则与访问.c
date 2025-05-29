
#include <stdio.h>

int main(int argc, char const *argv[])
{

	int data = 100;
	int *p1 = &data; //   p1指向data所在的地址
	int **p2 = &p1;	 //   p2指向p1所在的地址

	data = 10;

	printf("data = %d\n", data); // 10

	*p1 = 15;					 //  p1 == (&data) ==> *(&data) == data
	printf("data = %d\n", data); // 15

	**p2 = 20; // p2 == (&p1) ==> *(&p1) == p1 ==> *p1 == (&data) ==> *(&data) == data

	printf("data = %d\n", data); // 20

	*&data = 30;

	printf("data = %d\n", data); // 30

	p1[0] = 40;

	printf("data = %d\n", data); // 40

	p2[0][0] = 50;

	printf("data = %d\n", data); // 50

	int buf[5] = {1, 2, 3, 4, 5};
	int *p = buf;
	printf("%d \n", *p++);
	printf("%d \n", (*p)++);
	return 0;
}