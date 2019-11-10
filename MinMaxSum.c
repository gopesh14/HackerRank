#include<stdio.h>
int main()
{
long int a[10],i,n[10],sum=0,j,max,min,k;
    for(i=0;i<5;i++)    scanf("%ld",&a[i]);
    for(i=0;i<5;i++)    sum=sum+a[i];
    for(i=0;i<5;i++)    n[i]=sum-a[i];
    max=n[0];
    for(k=0;k<5;k++) {
        if(n[k]>max)    max=n[k];   
    }
    min=n[0];
    for(k=0;k<5;k++) {
        if(n[k]<min)    min=n[k];
    }
    printf("%ld %ld",min,max);
    return 0;
}

