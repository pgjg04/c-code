#include<stdio.h>

switch语法的基本用法 
int main()
{
	int day = 0;
	scanf("%d",&day); 
	switch(day)
	{
		case 1:
			printf("星期一\n");
			break;
		case 2:
			printf("星期二\n");
			break;
		case 3:
			printf("星期三\n");
			break;
		case 4:
			printf("星期四\n");
			break;
		case 5:
			printf("星期五\n");
			break;
		case 6:
			printf("星期六\n");
			break;
		case 7:
			printf("星期日\n");
			break;
		return 0;
		
	}
}

case语句的穿透性 
int main()
{
	int day = 0;
	scanf("%d",&day);
	switch (day)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("weekday\n");
		case 6:
		case 7:
			printf("weekend");
		default: //default--用来接受不匹配的值 
			printf("选择错误\n");
			break; 
	}
	return 0;
}
  
  
  
#include <stdio.h>
int main()
{
 int n = 1;
 int m = 2; 
 switch (n)
{
case 1:m++;
case 2:n++;
case 3:
	switch (n)
 	{//switch允许嵌套使用
	case 1:n++;
	case 2:m++;n++;
 	break;
 	}
case 4:
	m++;
	break;
 default:
 	break;
}
  printf("m = %d, n = %d\n", m, n);
  return 0;
}
