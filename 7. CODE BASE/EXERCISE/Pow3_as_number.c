//Cac so nguyen co ba chu so sao cho tong tam thua cua ba chu so hang tram chuc don vi bang tong so nguyen d
//Example 1^3+5^3+3^3=153
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    int a,b,c;
    for(a=0;a<10;a++)
    for(b=0;b<10;b++)
    for(c=0;c<10;c++){
        if(pow(a,3)+pow(b,3)+pow(c,3)==a*100+b*10+c)
            printf("%d%d%d\n",a,b,c);
    }
}

