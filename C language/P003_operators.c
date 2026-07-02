#include <stdio.h>
void main()
{
    //1.Assignment -> =,+=,-=,*=,/=
    int a = 12;
    printf("a = %d\n",a);

    a += 2; //a = a+2
    printf("a = %d\n",a);

    int b = 1;

    a -= b; //a =a-b 
    printf("a = %d\n",a);

    a *= 2;
    printf("a = %d\n",a);

    //2.Arithmetic -> +,-,*,/,%
    int i = 13,j=2;
    printf("%d\n",(i+j));
    printf("%d\n",(i-j));
    printf("%d\n",(i*j));
    printf("%d\n",(i/j));
    printf("%d\n",(i%j));

    float base = 34.3;
    float height = 2.3;
    float areaOfTraingle = (base*height)/2;
    printf("area of triangle = %f",areaOfTraingle);
}
