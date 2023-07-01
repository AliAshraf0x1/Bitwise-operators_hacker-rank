#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
    int max_and = 0;
    int max_xor = 0;
    int max_or = 0;
    int and;
    int xor;
    int or;
//Complete the following function.
void calculate_the_maximum(int n, int k) {
    for (int x = 1; x < n; x++) {
        for (int y = x + 1; y <= n; y++) {    
             and = x & y;
             xor = x ^ y;
             or = x | y;
            
            if (and > max_and && and < k) {
                max_and = and;    
            }
            
            if (xor > max_xor && xor < k) {
                max_xor = xor;    
            }
            
            if (or > max_or && or < k) {
                max_or = or;    
            }
        }
    }
    printf("%d\n%d\n%d", max_and, max_or, max_xor);
}
 int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
