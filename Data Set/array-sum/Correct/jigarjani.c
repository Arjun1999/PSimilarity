#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,sum=0,i;
    scanf("%d",&n);
    while(n>0){
        scanf("%d",&i);
        sum+=i;
        n--;
    }
    printf("%d",sum);



    return 0;
}
