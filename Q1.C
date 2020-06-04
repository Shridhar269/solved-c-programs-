#include<stdio.h>
#include<conio.h>
int main()
{
int a,b[100],i,z,t,count=0;
clrscr();
printf("\nEnter size:");
scanf("%d",&a);

printf("\nenter elements in array");
for(i=0;i<a;i++)
{
 scanf("%d",&b[i]);
}
printf("\n elements are:");
for(i=0;i<a;i++)
{
 printf("\n%d",b[i]);
}
printf("\n element to find");
scanf("%d",&z);
for(i=0;i<a;i++)
{
    if(b[i]==z)
    {
	count++;
    }

	t=b[i];
    }
if(count>a/2)
{
printf("\n %d no is repeated %d times",t,count);

}
else
{
printf("\n %d no is not repeated",t);
}
getch();
return 0;
}
