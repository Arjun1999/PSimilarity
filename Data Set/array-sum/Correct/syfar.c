#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int addthem(int a, int b)
{
    return a+b;
}


int main(int argc, char *argv[])
{    
    // get the number of expected array elements    
    int nItems; //number of array elements to expect
    scanf("%d",&nItems);
    
    // now scan them into an int array
    int numArray[nItems];
    int  i; //loop variable
    
    for(i=0; i < nItems; i++){
        scanf("%d", &numArray[i]);
    }

    // add all the elements ofthe array
    int result=0;    
    for(i=0; i < nItems; i++){
        result += numArray[i];
    }

    // print the result
    printf("%d",result);

    return 0;

}//end main
