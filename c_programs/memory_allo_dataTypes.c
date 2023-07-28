#include<stdio.h>
int main(){

    printf("\nchar = %d", sizeof(char));
    printf("\nint = %d", sizeof(int));
    printf("\nfloat = %d", sizeof(float));
    printf("\nlong = %d", sizeof(long));
    printf("\ndouble = %d\n", sizeof(double));

    long x = 7823782;
    printf("%d", sizeof(x));

    
    
    return 0;
}