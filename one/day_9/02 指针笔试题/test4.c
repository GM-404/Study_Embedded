int main()
{	
	//是一个指针数组，数组有4个元素，每个元素都是一个地址，地址下是字符串
	char   *c[] = {"ENTER","NEW","POINT","FIRST"};  //sizeof(c) = 16   32bit系统下地址是4字节

	// cp[] 是一个数组，数组有4个元素，每个元素的类型都是 char **,所以每个元素的类型都是指针，指针指向的地址下还是一个地址  ，这个地址下存储的才是字符
	char **cp[] = {c+3,c+2,c+1,c};	// { "FIRST","POINT","NEW","ENTER"}	  

	//*cpp 是一个指针变量  cpp指向数组cp的地址 
	char ***cpp = cp;					 

	printf("%s\n", **++cpp); //++cpp == cpp+1 ==> cpp指向cp数组的第一个元素的地址 + 1 ==> 向后偏移一个元素 == cpp指针指向数组中第二个元素"POINT"  ==> *cpp == *(&"POINT") ==> "POINT" == &'P' ==> *(&'P') == 'P'

	// printf("%s\n", *--*++cpp+3); 	
	// printf("%s\n", *cpp[-2]+3);	 	
	
	// printf("%s\n", cpp[-1][-1]+1);	
	return 0;
}
