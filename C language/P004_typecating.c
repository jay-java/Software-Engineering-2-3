#include<stdio.h>
//1.implicit -> by compiler
//2.explicit -> by user
void main(){
    int a = 12;//2 bytes
    float f = a; // 4 bytes
    printf("f = %f\n",f);

    printf("enter i = ");
    int i;
    scanf("%d",&i);
    printf("enter j = ");
    int j;
    scanf("%d",&j);

    //this line is for explicit typecasting because we cannot store floating type data into integer
    float k = (float)i / (float)j;
    printf("k = %f\n",k);
    
}