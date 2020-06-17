#include <stdio.h>
int main()
{
    int i;
    int a[6] = {1,2,3,4,10,11};
    int sum =0;
    for(i=0;i<6;i++){
        sum = sum+a[i];
    }
    printf("%d",sum);
}
