#include<stdio.h>
#include<stdlib.h>

int main()
{
 int l, max, j,k;
 printf("Enter size of array and elements:\n");
 scanf("%d",&l);
 int a[l];
 for(int i=0;i<l;i++)
 {
  scanf("%d",&a[i]);
 }
  max=a[0];
 for(int i=0;i<l;i++)
 {
     if(a[i]>max)
       {
        max = a[i];
       }
 }
 int c[max+1];           //c[]array used for counting
 for(int i=0;i<=max;i++)
 {
     c[i]=0;
 }

 for(int i=0;i<l;i++)
 {
   c[a[i]]++;
 }

 for(int i=1;i<=max;i++)
 {
    c[i]=c[i]+c[i-1];
 }

 int b[l];               //b[]used for output sorted array

 for(int i=l-1;i>=0;i--) {
    b[c[a[i]]-1] = a[i];
    c[a[i]]--;
 }
  printf("sorted array:\n");
  for(int i=0;i<l;i++)
  {
  printf("%d ",b[i]);
  }
  return 0;
 }















