#include<stdio.h>
int main()
{
    int a[100],n,i,s=0;
   //printf("enter the size\n");
    scanf("%d",&n);
    //printf("\n enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    printf("%d ",s);
    return 0;
}