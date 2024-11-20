#include <stdio.h>

int gcd_iterative(int x, int y) {
    while (y != 0) {         
        int temp = y;        
        y = x % y;           
        x = temp;            
    }
    return x;                
}

#include <stdio.h>

int gcd_recursive(int x, int y) {
    if (y == 0) return x;    
    return gcd_recursive(y, x % y);
}