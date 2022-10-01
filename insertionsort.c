# include <stdio.h>
# include <stdlib.h>

void insertionsort(int a[],int n)
{ for(int i=1; i<n; i++)  //considering a[o] element being sorted & rest unsorted
   {  int value = a[i];       
      int hole = i;    //hole denotes the index of element being compared
      while(hole>0 && a[hole-1]>value)
      { a[hole]=a[hole-1];
        hole = hole-1;
      }
        a[hole] = value;
   }
}
int main()
{ int l;
  printf("Enter the size of an array:\n", l);
  scanf("%d",&l);
  int a[l];
  printf("Enter the elements of array;\n",a[l]);
  for(int i=0;i<l;i++)
      scanf("%d", &a[i]);
  printf("sorted array: \n");
  insertionsort(a,l);
  for(int j=0;j<l;j++)
      printf(" %d\n",a[j]);
  return 0;
}
