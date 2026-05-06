int main() {
    
    int num = 150, a; 
    int *x;
    
    x = &num;
    a = *x;
    
    printf("%d %p\n", num, x);
    
    float pi = 3.1415, decimal;
    float *ptrF;
    ptrF = &pi; 
    printf("%.3f %.3f %p", pi, decimal, ptrF);
    
    return 0;
}