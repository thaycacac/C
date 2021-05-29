//Dem so luong ky tu chuoi nhap vao
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int count_char(char a[]){
    int i,count=0;
    for(i=0;i<strlen(a);i++){
        if (a[i]!=' ' && a[i]!='\t')
            count++;
    }
    return(count);
}
//_______________________________
main(){
    char a[256];
    gets(a);
    printf("%d",count_char(a));
}
