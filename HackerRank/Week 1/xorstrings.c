#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    char s[10000], t[10000];
    scanf("%s", s);
    scanf("%s", t);
    
    int leng= strlen(s);
    for(int i=0;i<leng;i++){
        if(s[i]=='0' && t[i]=='0' || s[i]=='1' && t[i]=='1'){
            printf("0");
        }
        else if(s[i]=='0' && t[i]=='1' || s[i]=='1' && t[i]=='0'){
                printf("1");
        }
    }
    return 0;
}
