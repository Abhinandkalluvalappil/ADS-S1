#include<stdio.h>
int main()
{
int i,f,m,n,s;
int a[n],b[m],c[s];
printf("Enter the number of first array:");
scanf("%d",&n);
printf("Enter the number of second array:");
scanf("%d",&m);
printf("Enter the elements of first array:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter the elements of second array:");
for(i=0;i<m;i++)
scanf("%d",&b[i]);
printf("The array before swapping is:\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
for(i=0;i<m;i++)
printf("%d ",b[i]);
for(i=0;i<n;i++)
c[i]=a[i];
for(i=0;i<m;i++)
a[i]=b[i];
for(i=0;i<n;i++)
b[i]=c[i];
printf("\nThe array after swapping is:\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
for(i=0;i<m;i++)
printf("%d ",b[i]);
}

