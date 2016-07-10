#include<stdio.h>
void main()
{
int i,j,x[50],y[50],a,b;
printf("\n Enter the value  :  ");
scanf("%d",&a);
for(i=0;i<a;i++)
{
scanf("%d",&x[i]);
x[i]=y[i];
}
for(j=0;j<a;j++)
{
scanf("%d",&x[j]);
}
for(i=0;i<a;i++)
{
for(j=0;j<a;j++)
{
if(y[i]>y[j])
{
b=x[i];
x[i]=x[j];
a[j]=b;
b=y[i];
y[i]=y[j];
y[j]=b;
}
else if(y[i]==y[i+1])
{
if(x[i]>x[j])
{
b=x[i];
x[i]=x[j];
x[j]=b;
}
}
}
}
for(i=0;i<a;i++)
{
printf("%d",x[i]);
}
return 0;
getch();

}
