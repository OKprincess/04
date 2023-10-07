//
//  main.c
//  04_P5
//
//  Created by ok sojoung on 2023/10/05.
//

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    unsigned int x;
    int b;
    
    printf("input a number :");
    scanf("%ui", &x);
    
    for (b=0; x!=0; x >>= 1)
    {
        if(x&1)
        {
            b++;
        }
    }
    
    printf("The result is %i\n",b);
    
    return 0;
}
