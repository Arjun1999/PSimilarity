#include<stdio.h>
int main(){
     int a[5];
     int sum = 0;
     int max = a[0];
     int min = a[0];
    for(int i = 0; i < 5; i++ ){
        scanf("%d",&a[i]);
        sum += a[i];
        
        if(max < a[i])
            max = a[i];
        if(min > a[i])
            min = a[i];
        
}
printf("%d %d", sum-max,sum-min) ;   
}