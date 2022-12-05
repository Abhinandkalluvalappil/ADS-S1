#include<stdio.h>
int main()
{
int a[5],b[5],c[10],i,k;
printf("Enter the 5 elements first array:");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
printf("Enter the 5 elements second array:\n");
for(i=0;i<5;i++)
scanf("%d",&b[i]);
printf("\nAlternivly merged array is:\n");
for(i=0,k=0;i<5;i++,k=k+2)
c[k]=a[i];
for(i=0,k=1;i<5;i++,k=k+2)
c[k]=b[i];
for(i=0;i<10;i++)
printf("%d ",c[i] );
}

