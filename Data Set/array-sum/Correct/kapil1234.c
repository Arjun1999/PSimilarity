#include <stdio.h>
int add();

int main() {

    add();
    return 0;
}
int add()
    {
    int i,a[1000],n;
    long int s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
        {
        s=s+a[i];
    }
    printf("%d",s);
    return s;
}


