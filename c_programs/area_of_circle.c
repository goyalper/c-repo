#include<stdio.h>
int main(){

    float pi =3.14;
    float r=2.22;
    double area = pi * r * r;
    printf("area of the circle who has radius = %.3f, while pi is %.3f = %lf sq units", r, pi, area);

    return 0;    
}