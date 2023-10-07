//
//  main.c
//  04_P4
//
//  Created by ok sojoung on 2023/10/05.
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int year;
    
    printf("input a year:");
    scanf("%d", &year);
    
    if ( (year%4==0 && year%100!=0) || year%400==0 )
        printf("This is leap year\n");
    else
        printf("This is not leap year\n");
    
    return 0;
}
