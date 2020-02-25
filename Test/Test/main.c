//
//  main.c
//  Test
//
//  Created by 金宸极 on 2020/2/22.
//  Copyright © 2020 金宸极. All rights reserved.
//

#include <stdio.h>

int main() {
    char str[100];
    while (scanf("%s",str) != EOF) {
        char x = 0;
        int num = 0;
        while (str[num] != '\0') {
            if (str[num] > x) {
                x = str[num];
            }
            num ++;
        }
        num = 0;
        while (str[num] != '\0') {
            printf("%c",str[num]);
            if (str[num] == x) {
                printf("(max)");
            }
            num ++;
        }
        printf("\n");
    }

    return 0;
}

