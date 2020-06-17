#include<stdio.h>
int main()
    {
    int a[10],n,i,j=0;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter array elements ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("array sum is");
    for(i=0;i<n;i++)
        {
        j=j+a[i];
    }
    printf("sumi is %d",j);
    return 0;
    
}