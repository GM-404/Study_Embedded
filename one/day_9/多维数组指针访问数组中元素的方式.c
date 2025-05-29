
#include <stdio.h>

int main()
{
    int buf[2][5] = { {1, 2, 3, 4, 5} , {6, 7, 8, 9, 10} } ;  // int[5]

    for (int i = 0; i < 2; ++i)
    {
    	for (int j = 0; j < 5; ++j)
    	{
    		printf("buf[%d][%d] = %d\n",i,j,buf[i][j]);
    	}
    }

    //定义指针变量指向二维数组的地址
    int (*p)[5] = buf;

   	//数组下标
   	buf[1][2] = 200;
   	printf("buf[1][2] = %d\n",buf[1][2]);

   	//指针访问 E1[E2] == *(E1+E2) ==> buf[1][2] ==> *(buf[1] + 2) ==> *( *(buf+1) + 2) ==> *( *(p+1) + 2)
   	*( *(p+1) + 2) = 300;
   	printf("buf[1][2] = %d\n",buf[1][2]);
   
    return 0;
}

