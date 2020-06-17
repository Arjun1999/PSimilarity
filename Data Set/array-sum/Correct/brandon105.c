#include <stdio.h>
int main()
    {
        int n,sum=0,temp;
        scanf("%d",&n);
        while(n--)
        {
                scanf("%d",&temp);
                sum=sum+temp;
        }
    printf("%d",sum);
    return 0;
    }