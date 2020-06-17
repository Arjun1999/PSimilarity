#include<stdio.h>
int main(){
int n;

//printf("enter the number of values");
scanf("%d",&n);

int a[n];

//printf("enter the number of array element");

for(int i=1;i<6;i++){

    scanf("%d",&a[i]);
}

//sorting
int temp;

for(int i=1;i<6;i++){
    for(int j=5;j>i;j--){
        if(a[j]<a[j-1]){
           temp = a[j-1];
           a[j-1]=a[j];
           a[j]=temp;

        }
    }
}

//printf("sorted array elements are");

/*for(int i=0;i<n;i++){

    printf("%d ",a[i]);


}*/

//max
int max=0;
for(int i=2;i<6;i++){
    max =max+a[i];
}

//min
int min=0;
for(int i=1;i<5;i++){
        min=min+a[i];

}
printf("%d %d",min,max);

return 0;
}

