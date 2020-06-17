#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    
    /*Declar Vars*/
    long int a;     //64-bit integer is necessary
    long int b; 
    long int c; 
    long int d;
    long int e;
    long int largest;
    long int smallest;
    
    /*Scan in the ints*/
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    
    /*Create an array of the 64-bit ints*/
    long int input[] = {a,b,c,d,e};
    
    /*Int Holder*/
    long int sum_holder[] = {0,0,0,0,0};
    
    /*All permutations*/
    for (int i = 0; i < 5; i++){
        
        /*Holds iterative sum*/
        long int temp = 0;
        
        /*input[ex_pivot] acts as the exclusive pivot*/
        for (int ex_pivot = 0; ex_pivot < 5; ex_pivot++){
            
            if(i != ex_pivot) temp += input[ex_pivot];
        }
        
        sum_holder[i] = temp;        
    }
    
    /*Assume the first is smallest/largest*/
    largest = sum_holder[0];
    smallest = sum_holder[0];
    
    /*Find the largest and smallest in tandum*/
    for(int i = 0; i < 5; i++){
        
        /*Largest*/
        if(sum_holder[i] > largest) largest = sum_holder[i];
        
        /*Smallest*/
        if(sum_holder[i] < smallest) smallest = sum_holder[i];
    }
    
    /*Print largest and smallest*/
    printf("%ld %ld", smallest, largest);
    
    /*EXIT*/
    return 0;
}
