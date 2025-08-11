#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int count[110]={0};
    for(int i=0;i<n;i++){
        int temp=arr[i];
        count[temp]++;
    }
    int total=0;
    for(int i=0;i<110;i++){
        if(count[i]==0){
            total=total+0;
        }
        else if(count[i]!=0){
            int num=count[i];
            int pair=num/2;
            total=total+pair;
        }   
    }
    printf("%d", total);
}