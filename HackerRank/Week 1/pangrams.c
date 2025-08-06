#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char alphaDB[26][2];
    for(int i=0;i<26;i++){
        alphaDB[i][0]=i+97;
        alphaDB[i][1] = 0;
    }
    
    char myText[1000];
    fgets(myText, sizeof(myText), stdin); 
    for (int i = 0; myText[i] != '\0'; i++) {
        myText[i] = tolower(myText[i]);
    }
    
    for(int i=0; myText[i] != '\0'; i++){
        for(int j=0;j<26;j++){
            if(myText[i]==alphaDB[j][0]){
                alphaDB[j][1]++;
            }
            else{
                continue;
            }
        }
    }
    for(int k=0;k<26;k++){
        if((alphaDB[k][1])==0){
            printf("not pangram");
            exit(0);
        }
        else{
            continue;
        }  
    } 
    printf("pangram");
}