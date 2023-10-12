#include<stdio.h>
struct stud
{
int rno;
char sname[20];
float per;
}s1[100];
int main()
{
	int i,n,ch;
	printf("enter limit");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("enter rno sname per");
	scanf("%d%s%f",&s1[i].rno,&s1[i].sname,&s1[i].per);
	}
do
{
	printf("\n 1-display all \n 2-per>70");
	printf("enter choice");
	scanf("%d",&ch);
switch(ch)
   {
	case 1:for(i=0;i<n;i++)
	{
	printf("\n student rollno=%d",s1[i].rno);	
	printf("\n student name=%s",s1[i].sname);
	printf("\n student percentage=%f",s1[i].per);		
	}
	break;
	case 2:for(i=0;i<n;i++)
	{
	if(s1[i].per>70)
	   {
	     printf("%d\t%s\t%f",s1[i].rno,s1[i].sname,s1[i].per);
	   }
	break;	
	}
	default:printf("invalid choice");   
}
}while(ch<3);
}
