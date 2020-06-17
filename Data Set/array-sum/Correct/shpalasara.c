#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int N,temp;
    long long int ans=0;
    scanf("%d",&N);
    while(N--)
    {
        scanf("%d",&temp);
        ans+=temp;
    }
    printf("%lld\n",ans);
    return 0;
}
