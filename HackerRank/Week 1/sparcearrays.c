#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    char strings[n][1000];
    for (int i = 0; i < n; i++) {
        scanf("%s", strings[i]);
    } 
    int q;
    scanf("%d", &q);
    char queries[q][1000];
    for (int i = 0; i < q; i++){
        scanf("%s", queries[i]);
    }
    for (int i = 0; i < q; i++){
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (strcmp(strings[j], queries[i])==0){
                count++;
            }
        }
        printf("%d\n", count);
    }
    
    return 0;
}