#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    int choco[n];
    for(int i=0;i<n;i++){
        scanf("%d", &choco[i]);
    }
    int d, m;
    scanf("%d %d", &d, &m);
    
    int count=0;
    for (int i=0; i<=n-m; i++) {
        int sum=0;
        for (int j=0; j<m; j++) {
            sum= sum+choco[i+j];
        }
        if (sum==d) {
            count++;
        }
    }
    printf("%d", count);
}