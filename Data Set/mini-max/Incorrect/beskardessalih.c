#include <stdio.h>
#include <stdlib.h>

int Func(int N,int K){
    int maks = N+K-1,top=0;
    int b = 0,f;
    for(f=1;f<K;f++,b++)
        top += f * ((10^b) + (10^(maks-f)));
    for(f=b*2;f<maks;f++,b++)
        top += 10^b*K;
    return top;
}

int main()
{
    int x=0, n=0, k=0;
    scanf("%d %d %d",&x,&n,&k);
    int r =1;
    if(n>=k)
        r = Func(n,k);
    else
        r = Func(k,n);
    printf("%l",r*x);
    scanf("%s");
    return 0;
}
