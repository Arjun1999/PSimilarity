#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define size 5

long int calc(long int a[],char op){
    int i,j,k;
    long int tmp,sum=0;
    
    for(j=0; j<size; j++){
        for(k=j+1; k<size; k++){
            if(a[j]>a[k]){
                tmp=a[j];
                a[j]=a[k];
                a[k]=tmp;
            }           
        }   
    }
    
    if(op=='-')
        for(i=0; i<size-1; i++)
            sum+=a[i];
    else if(op=='+')
        for(i=1; i<size; i++)
            sum+=a[i];
        
    return sum;        
}

int main(){
    long int a[size],res1,res2;
    int i;
    
    for(i=0; i<size; i++){
        scanf("%ld",&a[i]);
        if(a[i]<1 || a[i]>pow(10,9))    exit(1);
    }
    
    res1=calc(a,'-');
    res2=calc(a,'+');
    printf("%ld %ld",res1,res2);
    
    return 0;
}
