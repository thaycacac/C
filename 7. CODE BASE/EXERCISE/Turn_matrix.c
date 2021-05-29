//Xoay ma tran 90 do theo chieu kim dong ho
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

//________________________________
main(){
    int n,i,j,a[100][100],b[100][100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf("%6d",a[i][j]);
        printf("\n");
    }
//_________________________________
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            b[j][n-1-i]=a[i][j];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf("%6d",b[i][j]);
        printf("\n");
    }
}

