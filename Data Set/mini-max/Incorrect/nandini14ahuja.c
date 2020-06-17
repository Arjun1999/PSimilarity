#include<stdio.h>
#define max_size 100
int main()
{
    int ar[max_size];
    int i,n,s=0,s1=0;
    scanf("%d",&n);
     for(i=0;i<n;i++)
     { scanf("%d",&ar[i]);}
    for(i=0;i<n-1;i++)
    {s=s+ar[i];
    }
    for(i=1;i<n;i++)
    {s1=s1+ar[i];
    }
    printf("%d %d",s,s1);
    return 0;
}