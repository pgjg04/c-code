#include<stdio.h>

int main()
{
//	int���͵�ָ�� 
	int a=4;
	int* p=&a;
	printf("%p\n",&a);
	printf("%p\n",p);
	*p=20;
	printf("a=%d\n",a);
//	char���͵�ָ�� 
	char ch='w';
	char* pc= &ch;
	printf("%p\n",&ch);
	printf("%p\n",pc);
	*pc='abc';
	printf("ch=%c\n",ch);
	printf("%d\n",sizeof(pc));
//	double���͵ı���	
	double b=2.0;
	double* d=&b;
	printf("%p\n",d);
	printf("%p\n",&b);
	return 0;
 } 
