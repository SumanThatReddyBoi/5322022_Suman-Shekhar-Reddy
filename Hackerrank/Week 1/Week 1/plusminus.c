#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int neg=0;
    int pos=0;
    int zero=0;
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }    
    for(int i=0; i<size; i++){
        if(arr[i]<0){
            neg=neg+1;
        }
        else if(arr[i]>0){
            pos=pos+1;
        }
        else if(arr[i]==0){
            zero=zero+1;
        }
    }
    //pos
        printf("%lf\n", (float)pos/size);
    //neg
        printf("%lf\n", (float)neg/size);
    //zero
        printf("%lf\n", (float)zero/size);
}