/* accept structure emp(eno,ename,sal) and display maximun salary emp detail */
#include<stdio.h>
struct emp
{
int eno;
char ename[20];
float sal;
}e1[100];
int main()
{
	void disp(struct emp e1[100],int n);
	int i,n;
	printf("enter limit");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{		
	   printf("enter eno ename sal");
	   scanf("%d%s%f",&e1[i].eno,&e1[i].ename,&e1[i].sal);	
	}
	disp(e1,n);
}
	void disp(struct emp e1[100],int n)
{

	int i,max,index=0;
	max=e1[0].sal;
	for(i=0;i<n;i++)
	 {
	   if(e1[i].sal>max)
	   {
	    max=e1[i].sal;
	    index=i;
	  }
}
	printf("%d\t%s\t%f",e1[index].eno,e1[index].ename,e1[index].sal);
}
