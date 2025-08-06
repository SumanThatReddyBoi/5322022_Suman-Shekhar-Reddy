#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int main() {
    long arr[5],tot=0, small= LONG_MAX, big=LONG_MIN;
    for(int i=0;i<5; i++){
        scanf("%ld", &arr[i]);
        tot=tot+arr[i];
        if(arr[i] < small) small = arr[i];
        if(arr[i] > big) big = arr[i];
    }
    printf("%ld %ld",tot-big, tot-small);

}
