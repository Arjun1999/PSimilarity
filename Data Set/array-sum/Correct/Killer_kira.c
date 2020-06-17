#include <stdio.h>
#include <stdlib.h>

void input(int a[],int n)
{
    int i;
    //printf("Enter the elements of the array with spaces between the numbers\n");
    for(i=0;i<n;i++)
        scanf("%d",a+i);
}

int sum(int a[],int n)
{
    int i,s=0;
    for(i=0;i<n;i++)
        s=s+a[i];
    return s;
}

int main()
{
    int a[1000],n;
    //printf("Enter the total number of elements in the array( <=1000)\n");
    scanf("%d",&n);

    input(a,n);
    printf("%d",sum(a,n));
    return 0;
}
