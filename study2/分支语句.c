#include<stdio.h>

int main()
{
	int age=0;
	scanf("%d",&age);
	if (age<18)
		printf("δ����\n");
	else
	{
		if (age>18 && age<=28)
			printf("����\n");
		else if (age>28 && age<=50)
			printf("׳��\n");
		else
		printf("����\n");
	}
	
	return 0;
}

