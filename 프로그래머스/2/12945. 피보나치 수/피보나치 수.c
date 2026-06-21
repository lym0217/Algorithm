#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    long long a = 0, b = 1, tmp = 0;
    for(int i=2; i<=n; i++){
        tmp = a%1234567+b%1234567;
        a=b;
        b=tmp;
    }
    answer = tmp%1234567;
    return answer;
}