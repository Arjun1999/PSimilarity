#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
long int numbers[5];
void FirstMin(long int *num){
    long int memory;
    for(int i=1;i<5;i++){
        if (*(num+i)<*(num)){
            memory=*num;
            *num=*(num+i);
            *(num+i)=memory;
        }
        
    }
}

void LastMax(long int *num){
    long int memory;
    for(int i=3;i>=0;i--){
        if ((*(num+i))>*(num+4)){
            memory=*(num+4);
            *(num+4)=*(num+i);
            *(num+i)=memory;
        }
        
    }
}
    

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    long int sum=0;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    numbers[0]=a;
    numbers[1]=b;
    numbers[2]=c;
    numbers[3]=d;
    numbers[4]=e;
    
    FirstMin(&numbers);


    LastMax(&numbers);


    //Min
    for(int i=0;i<4;i++){
        sum=sum+*(numbers+i);
    }
    printf("%lli ",sum);
    sum=0;
    //Max
    for(int i=1;i<=4;i++){
        sum=sum+*(numbers+i);
    }
    printf("%lli",sum);
    
    return 0;
}
