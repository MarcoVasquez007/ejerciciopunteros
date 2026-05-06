#include <stdio.h>

int main() {
    
    int num = 150, a; 
    int *x;
    
    x = &num;
    printf("%d %p", num, x);
    
    return 0;
}