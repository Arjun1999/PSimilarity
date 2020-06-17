#include <stdio.h>
int main()
    {
    int a,sum=0;
    scanf("%d",&a);
    int b[a];
    for(int i=0;i<a;i++)
        {
            scanf("%d",&b[i]);
            sum = sum + b[i];
}
    printf("%d",sum);
return 0;
}

