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
    int n;
    scanf("%d", &n);
    int arr[n][n];
    int pri=0, sec=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                pri=pri+(arr[i][j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j==(n-1)){
                sec=sec+(arr[i][j]);
            }
        }
    }
    int temp=pri-sec;
    int final=abs(temp);
    printf("%d", final);
}