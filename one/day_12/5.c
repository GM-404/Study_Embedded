
/*******************************************************************
*
*	file name:	demo.c
*	author	 :  cecelmx@126.com
*	date	 :  2024/04/07
*	function :  计算n的阶乘  1*2*3*4*...*n-1*n  考查递归思想解决问题
* 	note	 :  None
*
*	CopyRight (c)  2023-2024   cecelmx@126.com   All Right Reseverd 
*
* *****************************************************************/



int func(unsigned int n)
{

	//递归函数必须提前写好终止条件,当n==1时可以选择终止函数
	if (1 == n)
	{
		return 1;
	}
	else
	{
		return func(n-1)*n;
	}

}



int main(int argc, char const *argv[])
{	
	
	int data = func(1);
	
	return 0;
}