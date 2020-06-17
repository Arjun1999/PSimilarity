#include <stdio.h>
#include <stdlib.h>
int n,a[100],i;
int arsum(int a[],int n)
{
    int sum=0;
    for(i=0;i<n;i++)
        sum+=a[i];
    return sum;
}
int main()
{
    //printf("Enter the no. of elements\n");
    scanf("%d",&n);
    if(n>0)
    {
        //printf("Enter the array elements\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>1000)
                i--;
        }
        printf("%d\n",arsum(a,n));
    }
    else 
        // printf("n<0");
    return 0;
}