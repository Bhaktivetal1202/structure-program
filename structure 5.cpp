#include<stdio.h>
struct book
{
	int bno,qty;
	char bname[20];
	float rate,total;
}b1;
int main()
{
	printf("book number");
	scanf("%d",&b1.bno);
	printf("enter book name");
	scanf("%s",&b1.bname);
	printf("enter book rate");
	scanf("%f",&b1.rate);
	printf("enter qty");
	scanf("%d",&b1.qty);
	b1.total=(float)b1.rate*b1.qty;
	printf("book number=%d",b1.bno);
	printf("book name=%s",b1.bname);
	printf("book rate=%f",b1.rate);
	printf("book qty=%d",b1.qty);
	printf("book total amount=%f",b1.total);
}
