#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void splitToWords(char s[], char a[][30], int &m);
void ascen(char s[],char a[][30], int m);
void slipt2(char s[], char a[][30], int m);

//remove redundant spaces in a string s
void removeRedSpaces(char s[])
 {int n,low, up, i, j; char x[100];
  n = strlen(s);
  i=0; j=n-1;
  while(i<n && s[i]==' ') i++;
  low = i;
  while(j>0 && s[j]==' ') j--;
  up = j;
  if(low>up) {strcpy(s,""); return;}
  strcpy(x,"");
  i = low; j=0;
  while(i<=up)
   {while(i<up && s[i]==' ') i++;
    while(i<=up && s[i]!=' ') x[j++] = s[i++];
    if(i<=up) x[j++] = ' ';
   }
  x[j] = '\0';
  strcpy(s,x);
 }

//Enter data for a string s
void input(char s[])
 {printf("Enter a string s = ");
  fflush(stdin);
  gets(s);
  removeRedSpaces(s);
 }

//Display a string s
void display(char s[])
 {printf("%s\n",s);
 }

//--------------------------------------------------------
void fun(int tc, char s[])   // Complete this function
 {// Write your statements here
	char a[100][30]; int m;
	splitToWords(s,a,m);
	if (tc==1){ascen(s,a,m);}
	else slipt2(s,a,m);
 }

void splitToWords(char s[], char a[][30], int &m)
 {int i,j,k,n; char x[30];
  n = strlen(s);
  i=0;k=0;
  while(i<n)
   {
    if(i>n-1) break;
    //a[i] is the first character of a word
    j=0;
    while(i<n && s[i]!=' ') x[j++] = s[i++];
    x[j] = '\0';
    strcpy(a[k++],x);
	i++;
   }
   m= k;         
 }

void ascen(char s[],char a[][30], int m)
{
	char temp[30];
	for (int i=0;i<m-1;i++)
	{
		for (int j=i+1;j<m;j++)
		{
			if (strcmp(a[i],a[j])>0)
			{
				strcpy(temp,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],temp);
			}
		}
	}
	
	for(int i=0;i<m;i++)
	{
		if (i==0) 
		{
			strcpy(s,a[i]); 
			strcat(s," ");
		}
		else {strcat(s,a[i]);strcat(s," ");}
	}
}

void slipt2(char s[], char a[][30], int m)
{
	for (int i=1;i<m-1;i++)
	{
		if (i==1) {strcpy(s,a[i]); strcat(s," ");}
		else {strcat(s,a[i]);strcat(s," ");}
	}
}
 
int main() {  // Do not edit this function
  // system("cls");
  printf("\nTEST Q3 (2 marks):\n");
  int tc;
  char s[100];
  printf("Enter tc (1 or 2) = ");
  scanf("%d",&tc);
  input(s);
  printf("\nThe original string:\n"); 
  display(s);
  printf("\nThe string after processing:\n"); 
  fun(tc,s);
  display(s);
 //OUTPUT for marking:
  printf("\nOUTPUT:\n");
  display(s);
  printf("\n");
  system ("pause");
  return(0);
}

