#include<stdio.h>
#include<limits.h>
int main()
{
    int inp, largest=0,smallest=INT_MAX,sum;
    unsigned max=0;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&inp);
        if(inp>largest)largest=inp;
        if(inp<smallest)smallest=inp;
        sum+=inp;
    }
    printf("%u %u\n",sum-largest,sum-smallest);
}
    
