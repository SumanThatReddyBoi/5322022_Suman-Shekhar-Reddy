#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int asc(const void*a, const void*b){
    return (*(int*)a-*(int*)b);
}

int dsc(const void *a, const void *b){
    return (*(int*)b-*(int*)a);
}

int main(){
    int q;
    scanf("%d", &q);
    while(q > 0){
        int n, k;
        scanf("%d %d", &n, &k);
        int arr[2][n];
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < n; j++){
                scanf("%d", &arr[i][j]);
            }
        }

        qsort(arr[0], n, sizeof(int), asc);
        qsort(arr[1], n, sizeof(int), dsc);

        int yn = true;
        for(int j = 0; j < n; j++){
            int a = arr[0][j];
            int b = arr[1][j];
            if(a + b >= k){
                continue;
            }
            else{
                printf("NO\n");
                yn = false;
                break;
            }           
        }
        if(yn == true){
            printf("YES\n");
        }    
        q--;
    }
}
