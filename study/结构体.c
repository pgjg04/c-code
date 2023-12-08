#include<stdio.h>

struct Book
{
	char name[20];
	int price;
};

int main()
{
	struct Book b1={"肖申克的救赎",60};
	printf("name=%s\n",b1.name);
	printf("price=%d\n",b1.price);
	b1.price=50;
	printf("修改后的价格=%d\n",b1.price);
//	利用解引用来指向b1 
	struct Book* pb=&b1;
 	printf("name=%s\n",(*pb).name);
	printf("price=%d\n",(*pb).price);
//	利用->来指向b1 
	printf("%s\b",pb->name );
	printf("%d\n",pb->price);
	return 0;
	
}
