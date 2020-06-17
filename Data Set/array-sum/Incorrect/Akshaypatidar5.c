#include<stdio.h>
int main()
{
    int ar[6]={1,2,3,4,10,11},i,sum=0;
    
    for(i=0;i<6;i++)
    {
        sum+=ar[i];
    }
    printf("%d",sum);

}
