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

    char letra = 'a', caracter ; 
    char *ptrC;
    
    ptrC = &letra;
    
    caracter = *ptrC;
    
    printf("%c %c %p", letra, caracter, ptrC);
     

    return 0;
}