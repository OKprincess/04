//
//  main.c
//  04_P6
//
//  Created by ok sojoung on 2023/10/05.
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int input;
    int sec, min, hour;
    
    printf("input second:");
    scanf("%d", &input);
    
    sec     = input%60;
    min     = (input%3600)/60;
    hour    = input/3600;
    
    printf("The time %d : %d : %d\n", hour, min, sec);
    
    return 0;
}
