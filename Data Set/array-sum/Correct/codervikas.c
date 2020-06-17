#include <stdio.h>
int main() {
     int n,i,j,add=0; 
    scanf("%d",&n);      // no array size use
   int a[n];
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
     /*  }
    for(i=0;i<n;i++)
    {*/
     add+=a[i];
    }
    printf("%d",add);
    return 0;
}
