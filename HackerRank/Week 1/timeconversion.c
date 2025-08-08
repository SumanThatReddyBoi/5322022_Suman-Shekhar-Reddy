#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char s[11];
    scanf("%s", s);
    int hr;
    sscanf(s, "%2d", &hr);

    if (s[8] == 'A' && hr == 12) {
        hr = 0;
    } 
    else if (s[8] == 'P' && hr != 12) {
        hr += 12;
    }

    printf("%02d:%c%c:%c%c\n", hr, s[3], s[4], s[6], s[7]);
    return 0;
}
