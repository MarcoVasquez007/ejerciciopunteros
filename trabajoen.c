#include <stdio.h>

int main() {
    
    int num = 150, a; 
    int *x;
    
    x = &num;
    printf("%d %p", num, x);

     float pi = 3.1415, decimal;
    float *ptrF;
    ptrF = &pi; 
    printf("%f %p", pi, ptrF);
    
    return 0;
