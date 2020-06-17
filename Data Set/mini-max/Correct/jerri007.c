#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long int sum(long int a, long int b,long int c,long int d){
    long int result;
    
    result = a+b+c+d;
    return result;
}

long int maxx(long int a, long int b){
    if(b > a){
        return b;
    }
    return a;
}

long int minn(long int a, long int b){
    if(b < a){
        return b;
    }
    return a;
}

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    long int max = 0;
    long int min = 0;
    long int test1,test2,test3,test4,test5;
    int i;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    
    test1 = sum(b,c,d,e);
    test2 = sum(a,c,d,e);
    test3 = sum(a,b,c,e);
    test4 = sum(a,b,c,d);
    test5 = sum(a,b,d,e);
    max = maxx(test1,test2);
    max = maxx(max,test3);
    max = maxx(max,test4);
    max = maxx(max,test5);
    min = minn(test1,test2);
    min = minn(min,test3);
    min = minn(min,test4);
    min = minn(min,test5);
    printf("%ld %ld",min,max);   
    
    
    return 0;
}
