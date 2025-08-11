#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    
int main(){
    int n, p;
    scanf("%d", &n);
    scanf("%d", &p);

    int front = p / 2;
    int back = (n / 2) - (p / 2);
    if(front < back){
        printf("%d", front);
    } else {
        printf("%d", back);
    }
    return 0;
}