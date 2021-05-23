//Xac dinh ngay thu bao nhieu trong nam
#include <stdio.h>
#include <stdlib.h>

void main(){
    int i,day,month,day_of_year=0;
    scanf("%d",&day);
    scanf("%d",&month);
    day_of_year=day;
    for(i=1;i<month;i++){
        switch(i){
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12: day_of_year+=31; break;
            case 4:
            case 6:
            case 9:
            case 11: day_of_year+=31; break;
            case 2: day_of_year+=28;
        }
    }
    printf("%d",day_of_year);
}

