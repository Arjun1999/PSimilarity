#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int arraySum(int *arr,int size){
    int sum = 0,index=0;
    do{
        if(size==0 || arr==NULL){
            break;
        }
        for(index=0;index<size;index++){
            sum+=arr[index];
        }
        
    }while(0);
    return sum;
}

int main() {

    int N,num,index;
    int *inpArray = NULL;
    scanf("%d",&N);
    do{
        if(N==0)break;
        inpArray = (int *)malloc(N*sizeof(int));
        if(inpArray == NULL)break;
        
        for(index=0;index<N;index++){
            scanf("%d",&num);
            inpArray[index] = num;  
        }
        
        printf("%d",arraySum(inpArray,N));
        if(inpArray){
            free(inpArray);
        }
    }while(0);
        
    return 0;
}
