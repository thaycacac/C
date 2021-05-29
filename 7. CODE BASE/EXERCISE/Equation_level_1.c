#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
/*Giải phương trình bậc 1*/

main(){
    float a,b;

    scanf("%f%f",&a,&b);

//Giải

    if(a!=0 )
        printf("%f",-b/a);
    else {
        if(b==0)
            printf("Phuong trinh co vo so nghiem");
        else
            printf("phuong trinh vo nghiem");
    }
}
