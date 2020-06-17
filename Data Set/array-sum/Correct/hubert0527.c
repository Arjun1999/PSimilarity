#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int num;
    int i,ans=0;
    int input;
    scanf("%d",&num);
    for(i=0;i<num;i++){
        scanf("%d",&input);
        ans=ans+input;
    }
    printf("%d",ans);
    return 0;
}
