//Cho mang A n phan tu. nhap k. Dich phai xoay vong mang a k lan.
//Example: 5 7 2 3 1 9 . nhap k=2 => 1 9 5 7 2 3
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void move_and_turn(int n, int k){
    int i,a[1000],b[1000];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=n-1;i>=k;i--){
        b[i]=a[i-k];
    }
    for(i=0;i<k;i++)
        b[i]=a[i+n-k];
    for(i=0;i<n;i++)
        printf("%d ",b[i]);

}
main(){
    int n,k;
    scanf("%d%d",&n,&k);
    move_and_turn(n,k);
}
