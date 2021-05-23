//viet ham xoa phan tu vi tri chan trong mang
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void delete_even(int n){
    int i,a[1000];
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    for(i=0;i<n;i+=2){
        printf("%d",a[i]);
    }
}
//________________________________
main(){
    int n;
    scanf("%d",&n);
    delete_even(n);
}
