#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

#define ARRAY_SIZE 5
int make_input(long int *p,int length) {
    for (int i=0;i<length;++i) {
        scanf("%ld",p+i);
    }
    return (0);
}

int sort(long int *p,int length) {
    if (length==1) {
        return 0;       
    }
    long int temp;
    for (int i=0;i<length-1;++i) {
        if (p[i]<p[i+1]) {
            temp=p[i];
            p[i]=p[i+1];
            p[i+1]=temp;
        }
    }
    return sort(p,length-1);
}
long int max_sum(long int *p, int length) {
    long int sum=0;
    for (int i=0;i<length-1;++i) {
        sum+=p[i];
    }
    return sum;
}
long int min_sum(long int *p, int length) {
    long int sum=0;
    for (int i=1;i<length;++i) {
        sum+=p[i];
    }
    return sum;
}

int main() {
    long int p[5];
    make_input(p,ARRAY_SIZE);
    sort(p,ARRAY_SIZE);
    printf("%ld %ld",min_sum(p,ARRAY_SIZE),max_sum(p,ARRAY_SIZE));
    exit(0);
        

}
