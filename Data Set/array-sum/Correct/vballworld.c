#include<stdio.h>

int main()
{
	int arraySize, arraySum;
	int currentNumber;

    //read arraySize
	scanf("%d",&arraySize);

    //run while arraySize is greater than 0
    while (arraySize) {
        //read first integer (until space is read), store number into currentNumber
        scanf("%d",&currentNumber);
        arraySum+= currentNumber;

        //decrement arraySize
        arraySize--;
    }

	printf("%d",arraySum);
	return 0;
}
