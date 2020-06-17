#include <stdio.h>
int main()
{
    int size,sum=0,d;
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&d);
        sum+=d;
    }
    printf("%d",sum);
    return 0;
}
