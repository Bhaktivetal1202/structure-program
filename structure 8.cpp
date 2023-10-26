/* accept structure emp(eno,ename,sal) and accept eno to serach and diaply all emp
details */
#include<stdio.h>
#include<string.h>
struct emp
{
	int eno;
	char ename[20];
	float sal;
}e1[100];
int main()
{
	int n,ch,i;
	char name[20];
	printf("enter limit");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter emp eno ename sal");
		scanf("%d%s%f",&e1[i].eno,&e1[i].ename,&e1[i].sal);
	}
	do
	{
		printf("1-dislapy all \n 2-serch by name");
		printf("\n enter choice");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:printf("\n enter emp name to search");
			   scanf("%s",&name);
			   int f=0;
			   for(i=0;i<n;i++)
			   {
			   	if(strcmp(e1[i].ename ,name)==0)
			   	{
			   		f=1;
			   		break;
				   }
			   }
			   if(f==1)
			{
			      printf(" \n record found");
			   	printf("\n emp id=%d",e1[i].eno);
			    printf("\n emp name=%s",e1[i].ename);
			    printf("\n emp sal=%f",e1[i].sal);
			}
			else
			printf("\n record not found");
			break;
         case 2:for(i=0;i<n;i++)
		{
			printf("\n emp id=%d",e1[i].eno);
			printf("\n emp name=%s",e1[i].ename);
			printf("\n emp sal=%f",e1[i].sal);
		}
		break;			    
		default:printf("\n invalid choice");
	}
	}while(ch<3);
}
