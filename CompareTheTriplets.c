#include<stdio.h>
int main()
{
  int i,j,a_s[100],b_s[100],k,c=0,t=0;
  for(i=0;i<3;i++)  scanf("%d",&a_s[i]);
  for(j=0;j<3;j++)  scanf("%d",&b_s[j]);
  for(k=0;k<3;k++) {
    if(a_s[k]>b_s[k]) {
        c+=1;
    }
    else if(a_s[k]<b_s[k]) {
        t+=1;
    }
    else if(a_s[k]=b_s[k]) {
        c+=0;
        t+=0;
    }
  }
  printf("%d %d",c,t);
  return 0;
}



