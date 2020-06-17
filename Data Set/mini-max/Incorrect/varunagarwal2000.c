/*#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int sum1=0,sum2=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            sum1 = sum1 + a[i][j];
        }
    }
    for(i=0;i<n;i++)33
    {
        for(j=0;j<n;j++)
        {
            if(i+j==n-1)
            sum2 = sum2 + a[i][j]; 
        }
    }
    if(sum1>sum2)
    printf("%d",sum1-sum2);
    else
    printf("%d",sum2-sum1);
    
}*/
/*#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=n-1;j>i;j--)
        {
            printf("*");
        }
        for(j=0;j<=i;j++)
        {
            printf("#");
        }
        printf("\n");

    }
}*/
#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int sum=0,min,max;
    int b[n];
    int j;
    for(i=0;i<n;i++)
        sum = sum +a[i];
    
    for(i=0;i<n;i++)
    {
        sum= sum-a[i];
        b[i]=sum;
    }
    min=b[0];
    max=b[0];
    for(i=0;i<n;i++)
    {
        if(b[i]<min)
            min=b[i];
        if(b[i]>max)
            max=b[i];

    }
    printf("%d ",min);
    printf("%d",max);

}