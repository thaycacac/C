//In bang cuu truong
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
main(){
    int i,j,a[9][9];
    for(i=0;i<9;i++){
    for(j=0;j<9;j++){
        a[i][j]=(i+1)*(j+1);
        printf("%6d",a[i][j]);
    }
    printf("\n");
    }
}
