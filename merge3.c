#include<stdio.h>
int main()
{
int i,j,n,m,s;
int a[n],b[m],c[s];
printf("Enter the number of elements in first array :");
scanf("%d",&n);
printf("Enter the number of elements in second array :");
scanf("%d",&m);
printf("Enter the first array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
s=n+m;
printf("Enter the second array elements:");
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<n;i++)
{
c[i]=a[i];
}
for(i=n,j=0;i<s,j<m;i++,j++)
{
c[i]=b[j];
}
printf("The joined array is:");
for(i=0;i<s;i++)
printf("%d ",c[i]);
}



