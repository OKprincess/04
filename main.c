//
//  main.c
//  04_P3
//
//  Created by ok sojoung on 2023/10/05.
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int input;
    int sec, min;
    
    printf("input second:");
    scanf("%d", &input);
    
    sec     = input%60;
    min     = input/60;
    
    printf("The time is %d : %d\n",min, sec);
    
    return 0;
}
