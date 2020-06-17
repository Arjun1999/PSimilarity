#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int k;
    int a[1000];
    int n,sum=0,i;
    //scanf("%d",&k);

//for(i=0;i<k;i++)

//{

    scanf("%d",&n);

    for(i=0;i<n;i++)

{
    


    scanf("%d\t",&a[i]);

}
    for(i=0;i<n;i++)

{
    k=a[i];

        sum=sum+k;

}
    printf("%d\n",sum);
//}
return 0;
}

