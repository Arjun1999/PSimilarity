#include <math.h>
#include <stdio.h>


int main() {
    double sum=0,suml=0,min,max;
    int i;
    double *arr = malloc(sizeof(double) * 5);
    for(i = 0; i < 5; i++)
    {
       scanf("%lf",&arr[i]);
    }
    min=max=sum=arr[0];
    for(i=1;i<5;i++){
        if(min>=arr[i])
 
            min=arr[i];
        if(max < arr[i])
            max=arr[i];
        sum=sum+arr[i];
    }
        printf("%.0lf %.0lf",sum-max,sum-min);
    
   /* sum=sum+arr[i];
    //printf("748568923");
    for(i=1;i<5;i++)
    suml=suml+arr[i];
    printf("%ld %ld",sum,suml);*/
    return 0;
}
