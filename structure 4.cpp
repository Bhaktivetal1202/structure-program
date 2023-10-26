/* accept structure emp(eno,ename,sal) and display emp whose sal greater than 1000 */
#include<stdio.h>
struct emp
{
int eno;
char ename[20];
float sal;
}e1[100];
int main()
{
	void disp_sal(struct emp e1[100],int n);
	int i,n;
	printf("enter limit");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("enter eno ename sal");
	scanf("%d%s%f",&e1[i].eno,&e1[i].ename,&e1[i].sal);
	}
 disp_sal(e1,n);
}
void disp_sal(struct emp e1[100],int n)
    {
	int i;
	for(i=0;i<n;i++)
	{
	if(e1[i].sal>=1000)
	{
	printf("%d\t%s\t%f\t",e1[i].eno,e1[i].ename,e1[i].sal);
	}
	}	
    }



