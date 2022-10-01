#include <stdio.h>
#include <stdlib.h>

void selectionsort(int A[],int n)
{
    int imin;
    for(int i=0;i<n-1;i++)
    {
        imin=i;
        for(int j=i+1;j<n;j++)
        {
            if(A[j]<A[imin])
                imin=j;
        }
    int temp=A[imin];
    A[imin]=A[i];
    A[i]=temp;
}
}
int main()
{
    printf("Enter Array Size.\n");
    int l,i;
    scanf("%d",&l);
    int A[l];
    printf("Enter the Elements of Array.\n");
    for(i=0; i<l; i++)
    scanf("%d",&A[i]);

    selectionsort(A,l);
    for(int i=0;i<l;i++)
    printf("%d ",A[i]);
    return 0;
}
