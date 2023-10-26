/* accept stucture student(sno,sname,per) and accept student roo number to search and dislpay student rno and per */
#include<stdio.h>
int main()
{
  struct student
  {
    int rno;
    char name[20];
    float per;
   }s1[100];
   int i,n,num,flag=0;
   printf("enter limit");
   scanf("%d",&n);
   printf("enter student info");
   for(i=0;i<n;i++)
	{
	   printf("enter roll number ,name and percentage");
	  scanf("%d%s%f",& s1[i].rno,& s1[i].name,& s1[i].per);
	}
   printf("enter roll number to search");
   scanf("%d",&num);
   for(i=0;i<n;i++)
	{
	if(s1[i].rno==num)
	 { 
	  flag=1;
	   break;
	 }
	}
 if(flag==1)
{
   printf("record is found");
   printf("student percentage,name=%s\n%f",s1[i].name,s1[i].per);
}
else
printf("record not found");
}
