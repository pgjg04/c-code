#include<stdio.h> 


 �ж�һ�����Ƿ�������
int main()
{
	int num = 0;
	scanf("%d",&num);
	if(num%2 == 1)
		printf("����\n");
	else
		printf(" ż��\n");
	return 0;
 } 

 ��ӡ1~100���е����� 
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



