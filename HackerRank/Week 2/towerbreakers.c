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

int main(){
    int t;
    scanf("%d",&t);
    int m, n;
    for(int i=0;i<t;i++){
        scanf("%d %d", &n, &m);
        if(m>1 && n%2==1){
            printf("1\n");
        else if(m==1 || n%2==0){
            printf("2\n");
        }
    }
}