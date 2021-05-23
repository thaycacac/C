#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
/*Giải phương trình bậc 2*/

main(){
    float x1,x2,delta,a,b,c;

//Giải

    scanf("%f%f%f",&a,&b,&c);
    delta=b*b-4*a*c;
    x1=(-b+sqrt(delta))/(2*a);
    x2=(-b-sqrt(delta))/(2*a);
    if(a==0){
        printf("x1= %f",-c/b);}
    else{
        if(delta>=0){
            printf("x1 = %f\n",x1);
            printf("x2 = %f\n",x2);
        }
        else
            printf("Phuong trinh vo nghiem");
    }
}
