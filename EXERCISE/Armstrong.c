//Kiem tra xem so nhap vao co phai so amstrong hay khong
#include <stdio.h>
#include<string.h>

main(){
    int num,tram,chuc,donvi,count=0;
    for(num=100;num<1000;num++){
    donvi=num%10;
    chuc=(num/10)%10;
    tram=num/100;
    if(tram*tram*tram+chuc*chuc*chuc+donvi*donvi*donvi==num){
        printf("%d la so Armstrong\n",num);
        count++;
    }
    }
    printf("Co %d so Armstrong",count);
}
