#include <stdio.h>
#include <stdlib.h>
#define bool int
#define true 1
#define false 0
//////////////////////////////////////////////////////////////////////
void Merge(long int a[],int m,int mid,int n){
int i,j,k;
int n1=mid+1-m;
int n2=n-mid;
long int l[n1],r[n2];
for(i=0;i<n1;i++){
    l[i]=a[m+i];
}
for(j=0;j<n2;j++){
    r[j]=a[mid+j+1];
}
i=0;
j=0;
k=m;
while(i<n1 && j<n2){
    if(l[i]<=r[j]){
        a[k]=l[i];
        i++;
    }
    else {
        a[k]=r[j];
        j++;
    }
    k++;
}
while(i<n1){
        a[k]=l[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k]=r[j];
        j++;
        k++;
    }
}

void MergeSort(long int a[],int m,int n){
int mid;
if(m<n){
    mid=(m+n)/2;
    MergeSort(a,m,mid);
    MergeSort(a,mid+1,n);
    Merge(a,m,mid,n);
}
}
/////////////////////////////////////////////////////////////////////////////

void InsertionSort(
int *a,int length){
int i,j;
int temp;
for(i=1;i<length-1;i++){
        temp=a[i];
    for(j=i-1;j>=0 && (temp<a[j]);j--){
            a[j+1]=a[j];
    }
    a[j+1]=temp;
}
}

//////////////////////////////////////////////////////////////////////////////

void BubbleSort(int *a,int length){
int i,j,temp;
bool swapped;
for(i=1;i<=length-1;i++){
        swapped=false;
    for(j=1;j<=length-i;j++)
    {
    if(a[j]<a[j-1])
    {
     temp=a[j-1];
     a[j-1]=a[j];
     a[j]=temp;
     swapped=true;
    }
    }
if(swapped==false)
    break;
}
}

////////////////////////////////////////////////////////////////////////////////

void SelectionSort(int *a,int length){
int i,j,min,min_index,temp;
for(i=0;i<=length-2;i++){
        min=a[i];
        min_index=i;
    for(j=i+1;j<=length-1;j++){
        if(a[j]<min){
            min=a[j];
            min_index=j;
        }
    }
    temp=a[min_index];
    a[min_index]=a[i];
    a[i]=temp;
}
}

///////////////////////////////////////////////////////////////////////////////////
int main()
{
int i;
long int max_sum,min_sum;
long int a[5];
for(i=0;i<5;i++)
    scanf("%ld",a+i);
MergeSort(a,0,(sizeof(a)/sizeof(a[0]))-1);
//InsertionSort(a,(sizeof(a)/sizeof(a[0])));
    /*
    printf("Sorted array is: ");
    for(i=0;i<5;i++)
        printf("%ld ",a[i]);
    */
max_sum=a[4]+a[3]+a[2]+a[1];
min_sum=a[0]+a[3]+a[2]+a[1];
//puts("");
printf("%ld %ld",min_sum,max_sum);
//BubbleSort(a,(sizeof(a)/sizeof(a[0])));
//SelectionSort(a,(sizeof(a)/sizeof(a[0])));
/*
for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
    printf("%d ",a[i]);
*/
//printf("\n%d",sizeof(long int));
return 0;
}
