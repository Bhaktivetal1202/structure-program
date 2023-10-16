#include<stdio.h>
#include<string.h>
struct student
{
 int rno;
 char name[20];
 float per;
}s1[100];
int main()
{
int n ,flag=0,i;
char sname[20];
printf("enter limit");
scanf("%d",&n);
printf("enter n stuent info");
for(i=0;i<n;i++)
{
printf("enter student rno,name,per");
scanf("%d%s%f",&s1[i].rno,&s1[i].name,&s1[i].per);
}
printf("enter name to search");
scanf("%s",&sname);
for(i=0;i<n;i++)
{
if(strcmp(s1[i].name,sname)==0)
{
flag=1;
break;
}
}
if(flag==1)
{
printf("record not found");
printf("\n student rno=%d",s1[i].rno);
printf("\n student per=%f",s1[i].per);
}
else
printf("record not found");
}
