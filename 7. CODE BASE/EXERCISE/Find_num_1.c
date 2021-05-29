//In ra tat ca cac cap so duong a,b sao cho a<b<100 va (a^2+b^2+1)/(a*b) la mot so nguyen
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
    int a,b;
    for(a=1;a<1000;a++)
        for(b=1;b<1000;b++)
            if((a*a+b*b+1)%(a*b)==0)
                printf("%d %d\n",a,b);



}
