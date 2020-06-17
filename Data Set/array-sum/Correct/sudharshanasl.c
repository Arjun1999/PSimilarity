#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int N,i,sum=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
        {
            int temp;
            scanf("%d",&temp);
            sum+=temp;
    }
    printf("%d",sum);
    return 0;
}
