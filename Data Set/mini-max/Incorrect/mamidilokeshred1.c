
#include <stdio.h>
int main() {
    int ar[100],sum;
    int i,min,max,size;
    scanf("%d",&size);
    for(i=0;i<size;i++) {
       scanf("%d",&ar[i]);
        }
    max=ar[0];
    min=ar[0]; 
    for(i=1;i<size;i++) {
        if(max>ar[i])
        {
            max=ar[i]; 
        }
        else
        if(min<ar[i]);
        {
            min=ar[i];
        } 
        printf("%d",sum-max);
        printf("%d",sum-min);
        return 0;
    } 
}
