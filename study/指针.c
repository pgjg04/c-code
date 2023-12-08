#include<stdio.h>

int main()
{
//	int类型的指针 
	int a=4;
	int* p=&a;
	printf("%p\n",&a);
	printf("%p\n",p);
	*p=20;
	printf("a=%d\n",a);
//	char类型的指针 
	char ch='w';
	char* pc= &ch;
	printf("%p\n",&ch);
	printf("%p\n",pc);
	*pc='abc';
	printf("ch=%c\n",ch);
	printf("%d\n",sizeof(pc));
//	double类型的变量	
	double b=2.0;
	double* d=&b;
	printf("%p\n",d);
	printf("%p\n",&b);
	return 0;
 } 
