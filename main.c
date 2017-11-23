//
//  main.c
//  Passing Array to Function as Argument
//
//  Created by Eun Jae Lee on 23/11/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//

#include <stdio.h>

//void showData(int[], int);  function decralation, data type & array / size

int sumArray(int[],int);

int main(int argc, const char * argv[]) {

    int a[5],i,sum;
    printf("Enter 5 elements of the array: \n");
    
    for (i=0; i<5; i++)
        scanf("%d",&a[i]);
        
        sum = sumArray(a,5);
        printf("Sum of all elements is %d \n",sum);
        
        getchar();
}

int sumArray(int b[], int c) { // function definition
    
    int sum=0,i;
    for (i=0; i<c; i++)
        sum = sum+b[i];
    return sum;
}


