#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


public class SimpleArraySum {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int number = sc.nextInt();
        int sum=0;
        for(int i = 0;i<number;i++){
            sum+=sc.nextInt();
        }
        System.out.println(sum);
    }
}
