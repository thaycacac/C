#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
main(){
    float a,b,c,dt;
    int n;
   // float dt;
    scanf("%d",&n);

    switch(n){
        case 0:{
            printf("Hinh tam giac\n");
            scanf("%f",&a,&b);
            dt=a*b/2;
            printf("%f\n",dt);
            break;
        }
        case 1:{
            printf("Hinh vuong\n");
            scanf("%f",&a);
            dt=a*a;
            printf("%f\n",dt);
            break;
        }
        case 2:{
            printf("Hinh chu nhat\n");
            scanf("%f%f",&a,&b);
            dt=a*b;
            printf("%f\n",dt);
            break;
        }
        case 3:{
            printf("Hinh thang\n");
            scanf("%f%f%f",&a,&b,&c);
            dt=(a+b)*c/2;
            printf("%f",dt);
            break;
        }
        case 4:{
            printf("Hinh tron\n");
            scanf("%f",&a);
            dt=a*a*3.14;
            printf("%f",dt);
        }
    }
}

