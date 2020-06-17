#include<stdio.h>
int main()
{
    int ar[50];int i,n,sum=0,*p;
    printf("enter the no. of elements in array\n");
    scanf("%d",&n);
    printf("enter the elements\n");
     {
        for(i=0;i<n;i++)
        { 
        scanf("%d",&ar[i]);
        p=ar;
        }
        for(i=0;i<n;i++)
        { 
        sum=sum+*p;
        p++;
        }
    }
    printf("the sum is : %d",sum);
    return 0;
}
