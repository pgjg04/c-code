#include<stdio.h>

struct Book
{
	char name[20];
	int price;
};

int main()
{
	struct Book b1={"Ф��˵ľ���",60};
	printf("name=%s\n",b1.name);
	printf("price=%d\n",b1.price);
	b1.price=50;
	printf("�޸ĺ�ļ۸�=%d\n",b1.price);
//	���ý�������ָ��b1 
	struct Book* pb=&b1;
 	printf("name=%s\n",(*pb).name);
	printf("price=%d\n",(*pb).price);
//	����->��ָ��b1 
	printf("%s\b",pb->name );
	printf("%d\n",pb->price);
	return 0;
	
}
