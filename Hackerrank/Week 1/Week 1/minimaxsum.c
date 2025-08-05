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

int main() {
    int arr[5];
    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }
    int a, b, c, d, e;
    int total=0;
    for(int i=0; i<5; i++){
        total=total+arr[i];
    }
    a=total-arr[0];
    b=total-arr[1];
    c=total-arr[2];
    d=total-arr[3];
    e=total-arr[4];
    
    //SMALL
    if(a<b && a<c && a<d && a<e){
        printf("%d", a);
    }else if(b<c && b<d && b<e){
        printf("%d", b);
    }else if(c<d && c<e){
        printf("%d", c);
    }else if(d<e){
        printf("%d", d);
    }else{
        printf("%d", e);
    }
    
    printf(" ");
    
    //BIG
    if(a>b && a>c && a>d && a>e){
        printf("%d", a);
    }else if(b>c && b>d && b>e){
        printf("%d", b);
    }else if(c>d && c>e){
        printf("%d", c);
    }else if(d>e){
        printf("%d", d);
    }else{
        printf("%d", e);
    }
}