#include<stdio.h>
//���� 
int Max(int x, int y)
{
	if(x>y)
		return x;
	else
		return y;
 } 
 //�궨��ĺ��� 
 #define MAX(X,Y) (X>Y?X:Y)
 
 int main()
 {
 	int a=100;
 	int b=90;
 	int max1=Max(a,b);
 	printf("max1=%d\n",max1); 
 //�궨�� 
 	int max2=MAX(a,b);
 	printf("max2=%d\n",max2);
 	return 0;
 }
