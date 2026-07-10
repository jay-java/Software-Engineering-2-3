#include<stdio.h>

void main(){
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int r,c;
    
    for(r=0;r<=2;r++){
        for(c=0;c<=2;c++){
            printf("%d ",a[r][c]);
        }
        printf("\n");
    }

    printf("\n");
    int b[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int c1[3][3];
    int k;
    for(r=0;r<=2;r++){
        for(c =0;c<=2;c++){
            c1[r][c]=0;
            for(k = 0;k<=2;k++){
                c1[r][c] += a[r][k] * b[k][c];
                
            }
        }
    }
    printf("\n");
    for(r=0;r<=2;r++){
        for(c=0;c<=2;c++){
            printf("%d ",c1[r][c]);
        }
        printf("\n");
    }

    // int num,i,mul;
    // printf("enter a number = ");
    // scanf("%d", &num);

    // for(i=1;i<=10;i++)
    // {
    //     mul=num*i;
    //     printf("%d * %d = %d\n",num,i,mul);
    // }
}
