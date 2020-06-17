#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N,array[1000],sum=0,i,j;
   scanf("%d",&N);
    if(1<=N<=1000){
    for(i=0;i<N;i++){
        scanf("%d",&array[i]);
    }
    }
    for(j=0;j<N;j++){
        sum+=array[j];
    }
    printf("%d",sum);


   /*nt sum=0,n;
    printf("enter the numbers");
    scanf("%d",&n);
    for()
    sum=sum+1;
    sum=sum+2;
    sum=sum+3;
    sum=sum+4;
    sum=sum+10;
    sum=sum+11; 
    printf("%d",sum);    */
    return 0;
}
