#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int arraySum(int);
int main() {
    int N,sum;
    fscanf(stdin,"%d",&N);
    sum=arraySum(N);
    fprintf(stdout,"%d",sum);
    return 0;
}

int arraySum(int N){
    int sum=0,tmp;
    for(;N!=0;N--){
        fscanf(stdin,"%d",&tmp);
        sum+=tmp;
    }
    return sum;
}