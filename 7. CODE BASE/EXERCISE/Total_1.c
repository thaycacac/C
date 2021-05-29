//Tinh tong: 1+1/2+1/3+1/4+...1/n
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    int i,n;
    float s=0.0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        s+=1.0/i;
    }
    printf("%f\n",s);
}

