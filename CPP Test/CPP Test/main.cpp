//
//  main.cpp
//  CPP Test
//
//  Created by 金宸极 on 2020/2/26.
//  Copyright © 2020 金宸极. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

void COPY(char from[3000],char to[3000], char exam[5], int n, int Q, int k){
    for (int i=0; i<k; i++) {
        if (exam[i] != ' ') {
            for (int j=(i*n); j<(i*n+n); j++) {
                to[j] = from[j%n];
            }
        } else {
            for (int j=(i*n); j<(i*n+n); j++) {
                to[j] = ' ';
            }
        }
    }
    if (Q) {
        COPY(to, to, exam, n*k, Q-1,k);
    }
    return;
}


void radio(int num, int R, int repo[100]){
    for (int i=0; i<10; i++) {
        if (num>0) {
            repo[i] = num % R;
            num /= R;
        } else {
            repo[i] = 0;
        }
    }
    return;
}

char take(char exam[5][5], int tag[100], int Q){
    int i = 0;
    while (i < Q*2-2) {
        if (exam[tag[i]][tag[i+1]] == ' ') {
            return ' ';
        }
        i+=2;
    }
    return exam[tag[2*Q-2]][tag[2*Q-1]];
}

int main() {
    int n,Q;
    while (scanf("%d\n",&n) != EOF && n) {
        char example[5][5];
        for(int i=0; i<n; i++) {
            gets(example[i]);
        }
        scanf("%d",&Q);
        int Line = pow(n, Q);
        int index = 0;
        int k = 1;
        for (int i=0; i<Line; i++) {
            int time = 1;
            for (int j=0; j<Line; j++) {
                int repo[100];
                radio(index, n, repo);
                printf("%c",take(example, repo, Q));
                if (time ) {
                    <#statements#>
                }
                index += k;
                time++;
            }
            printf("\n");
        }
    }
    return 0;
}
