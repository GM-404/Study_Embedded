
#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	int  data = 100;

	int  *p2 =  NULL; //��ֹҰָ�룬Ŀ����߳���ɿ���

	p2 = &data;		  // p2 ==> &p2 ==> *(&p2) == *&���Ի������ == p2

	data=10;

	printf("data = %d\n",data); //10  ͨ����������

	*p2 = 20;  //  p2 == (&data) ==> *(&data) == data == *p2 ����ʾ����data�е�ֵ

	printf("data = %d\n",*p2); //20  ͨ����������

	*&data = 30;

	printf("data = %d\n",data); //30  ͨ����������

	return 0;
}