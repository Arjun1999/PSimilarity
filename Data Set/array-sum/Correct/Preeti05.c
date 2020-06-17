#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   
    int size ,i,sum=0;
    int * arr,*temp;
    scanf("%d",&size);
    arr=(int*)malloc(size*sizeof(int));
    temp=arr;
    for(i=0;i<size;i++){
        scanf("%d",&(*temp));
        sum+=*temp;
        temp++;
    }
    printf("%d",sum);
    return 0;
}
