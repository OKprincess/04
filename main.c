//
//  main.c
//  04_P2
//
//  Created by ok sojoung on 2023/10/05.
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a, b;
    int sum, diff, mul, por, rest;
    
    printf("input two integers :");
    scanf("%i %i", &a, &b);
    
    sum     = a+b;
    diff    = a-b;
    mul     = a*b;
    por     = a/b;
    rest    = a%b;
    
    printf("+ result is %d.\n", sum);
    printf("- result is %d.\n", diff);
    printf("* result is %d.\n", mul);
    printf("/ result is %d.\n", por);
    printf("%% result is %d.\n", rest);
    
    return 0;
}
