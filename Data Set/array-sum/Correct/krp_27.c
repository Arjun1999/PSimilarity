#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,sum=0;
    scanf("%d",&n);
    if(n<1||n>1000)
        return 1;
    int *arr = (int*)malloc((sizeof(int))*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
        if(*(arr+i)<0 || *(arr+i)>1000)
            return 1;
        sum+= *(arr+i);
        
    }
        
    printf("%d",sum);
    return 0;
}
