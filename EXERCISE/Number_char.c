#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
void main()
{
  char para[80];
  int i = 0, count = 0;

//Nhập chuỗi

  gets(para);

//Đếm số phần tử

  while (para[i] != 0)
  {
    if (isalpha(para[i++]))
      count++;
  }

//In Kết quả

  printf("%d", count);

}
