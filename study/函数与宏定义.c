#include<stdio.h>
//函数 
int Max(int x, int y)
{
	if(x>y)
		return x;
	else
		return y;
 } 
 //宏定义的函数 
 #define MAX(X,Y) (X>Y?X:Y)
 
 int main()
 {
 	int a=100;
 	int b=90;
 	int max1=Max(a,b);
 	printf("max1=%d\n",max1); 
 //宏定义 
 	int max2=MAX(a,b);
 	printf("max2=%d\n",max2);
 	return 0;
 }
