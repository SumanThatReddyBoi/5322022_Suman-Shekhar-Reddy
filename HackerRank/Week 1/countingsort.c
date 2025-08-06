#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int count[100];
    for(int j=0;j<100;j++){
        count[j]=0;
    }
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    
    for(int i=0;i<100;i++){
        printf("%d ", count[i]);
    }

    return 0;
}