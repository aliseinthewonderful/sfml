#include <iostream>
#include <math.h>

int main()
{

    std::cout<<"Введите a,b,c"<<std::endl;

    float a=0;
    float b=0;
    float c=0;
    std::scanf("%f %f %f", &a, &b, &c);
    float d;
    float x1 = (- b - pow(d,1.0/2) ) /(2 * a);
    float x2 = (- b + pow(d,1.0/2) ) /(2 * a);
    d= b * b - 4 * a * c; 
    std::printf("%f\n %f\n", x1,x2);
}
