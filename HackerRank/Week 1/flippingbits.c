#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        unsigned int x;
        scanf("%u", &x);
        int bin[32];
        for (int i = 0; i < 32; i++) {
            bin[i] = x % 2;
            x = x / 2;
        }
        for (int i = 0; i < 32; i++) {
            bin[i] = 1 - bin[i];
        }
        unsigned int rev = 0;
        unsigned int twos = 1;
        for (int i = 0; i < 32; i++) {
            if (bin[i] == 1) {
                rev += twos;
            }
            twos *= 2;
        }
        printf("%u\n", rev);
    }

    return 0;
}
