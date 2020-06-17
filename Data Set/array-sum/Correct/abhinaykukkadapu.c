#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int con=0,sum=0,i;
    scanf("%d",&con);
    int *a = (int*)malloc(sizeof(int)*con);
    for(i=0;i<con;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<con;i++){
        sum+=a[i];
    }
    printf("%d",sum);
    
    return 0;
}
