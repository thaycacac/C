#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//HAM HOAN DOI HAI CHUOI
void swapString(char s1[], char s2[]){
	char y[10];
	strcpy(y,s1);
	strcpy(s1,s2);
	strcpy(s2,y);
}
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
 {printf("Enter a string s:\n");
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
	if(tc==1){
		char s1[100], s3[100];
		//Gan chuoi vao mang 2 chieu
		char temp[20][20];
		int i=0;
		strcpy(s3,s);
		char *token3;
		token3=strtok(s3," \t");
		while(token3!=NULL){
			strcpy(temp[i],token3);
			i++;
			token3=strtok(NULL," \t");
		}
		
		for(int j=0; j<5; j++)
		for(int k=j+1; k<5; k++)
			if(strcmp(temp[j],temp[k])<0)
				swapString(temp[j],temp[k]);
		strcpy(s,"");
		for(int j=0; j<i; j++){
		strcat(s,temp[j]);
		strcat(s," ");
		}
	}
	if(tc==2){
		char s1[100], s3[100];
	//Tim chu dai nhat trong chuoi
	int max=0;
	strcpy(s1,s);
	char *token;
	token=strtok(s1," \t");
	while(token!=NULL){
		if(strlen(token)>max) max=strlen(token);
		token=strtok(NULL," \t");
	}
	//Gan chuoi vao mang 2 chieu
	char temp[20][20];
	int i=0;
	strcpy(s3,s);
	char *token3;
	token3=strtok(s3," \t");
	while(token3!=NULL){
		strcpy(temp[i],token3);
		i++;
		token3=strtok(NULL," \t");
	}
	char y[1][20];
	for(int j=0; j<i; j++){
			if(strlen(temp[j])==max){
				strcpy(y[1],temp[j]);
				strcpy(temp[j],temp[i-1]);
				strcpy(temp[i-1],y[1]);
				break; break;
			}
	}
	strcpy(s,"");
	for(int j=0; j<i; j++){
		strcat(s,temp[j]);
		strcat(s," ");
	}
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

