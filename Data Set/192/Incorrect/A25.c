#include<stdio.h>
main()
{
    int i,j,k,a,c,b[1010],t=0;
    scanf("%d",&c);
    for(i=1;i<=1000;i++)
    {
        b[i]==(i*(i+1))/2;
    }
    for(i=1;i<=1000&&t==0;i++)
    {
        for(j=1;j<=1000&&t==0;j++)
        {
            if(b[i]+b[j]==c)
            {
                t=t+1;
                printf("YES");
            }
        }
    }
    if(t==0)
        printf("NO");
}
