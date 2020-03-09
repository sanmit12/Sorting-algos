#include<stdio.h>
void mergesort(int a[],int i,int j)
{ 
int k;
if(i<j)
{
k=(i+j)/2;
mergesort(a,i,k);
mergesort(a,k+1,j);
merge(a,i,k,j);
}
}
void merge(int a[],int l,int m,int n)
{
int i,j,k;
int c[6];
i=l;
j=m+1;
k=0;
while(i<=m && j<=n)
{
if(a[i]<=a[j])
{
c[k]=a[i];
k++;i++;
}
else
{
c[k]=a[j];
k++;
j++;
}
}
while(i<=m)
{
c[k]=a[i];
k++;
i++;
}
while(j<=n)
{
c[k]=a[j];
k++;j++;
}
for(i=l,j=0;i<=n;i++,j++)
a[i]=c[j];
}
void main()
{
int i,j;
int a[6];
printf("enter elements");
for(j=0;j<=5;j++)
{
scanf("%d",&a[j]);
}
mergesort(a,0,5);
for(i=0;i<6;i++)
{
printf("%d ",a[i]);
}
}


