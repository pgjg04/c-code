#include<stdio.h> 


 判断一个数是否是奇数
int main()
{
	int num = 0;
	scanf("%d",&num);
	if(num%2 == 1)
		printf("奇数\n");
	else
		printf(" 偶数\n");
	return 0;
 } 

 打印1~100所有的奇数 
int main()
{
	int num = 1;
	while(num<=100)
	{
		if(num%2 == 1)
			printf("%d ",num);
		
		num++;
	}
	
	return 0;
}



