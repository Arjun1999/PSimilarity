#include <stdio.h>
int main()
    
 {
    int i,b,sum=0;
    scanf("%d",&b);
int a[b];
    for(i=0;i<b;i++)
        {
        scanf("%d",&a[i]);
           sum=sum+a[i];
    }
    printf("%d",sum);
    return 0;
}
