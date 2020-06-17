#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 1000
int main() {
        
        int arr[MAX],i,sum=0,num;
        scanf("%d",&num);
        for(i=0;i<num;i++){
            scanf("%d",&arr[i]);
            sum+=arr[i];
        }
        printf("%d",sum);
        return 0;
}
