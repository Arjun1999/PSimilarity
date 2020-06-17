#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    long int min,max;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long int s1 = b+c+d+e;
    long int s2 = a+c+d+e;
    long int s3 = a+b+d+e;
    long int s4 = a+b+c+e;
    long int s5 = a+b+c+d;

    //printf("%ld %ld %ld %ld %ld\n",s1,s2,s3,s4,s5);
    min=max=s1;
    //printf("min %ld max %ld\n",min,max);
    if(min > s2){
        min = s2;
	//printf ("after s2 min %ld max %ld\n",min,max);
    } 
    if(min > s3){
        min = s3;
	//printf ("after s3 min %ld max %ld\n",min,max);
    }
    if(min > s4){
        min = s4;
	//printf ("after s4 min %ld max %ld\n",min,max);
    }
    if(min > s5){
        min = s5;
	//printf ("after s5 min %ld max %ld\n",min,max);
    }
    if(max < s2){
        max = s2;
	//printf ("after s2 min %ld max %ld\n",min,max);
    }//
    if(max < s3){
        max = s3;
	//printf ("after s3 min %ld max %ld\n",min,max);
    }
    if(max < s4){
        max = s4;
	//printf ("after s4 min %ld max %ld\n",min,max);
    }
    if(max < s5){
        max = s5;
	//printf ("after s5 min %ld max %ld\n",min,max);
    }
    printf("%ld %ld\n",min, max);
    return 0;

}
