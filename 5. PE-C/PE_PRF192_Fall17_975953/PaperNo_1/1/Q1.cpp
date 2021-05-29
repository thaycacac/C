#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//HAM KIEM TRA SO NGUYEN TO
int isPrime(int n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main() {
  system("cls");
  printf("\nTEST Q1 (4 marks):\n");
  printf("1. Run TC 1\n");
  printf("2. Run TC 2\n");
  //tc holds the test case number of test
  int tc;
  printf("Enter TC (0 to exit): "); scanf("%d",&tc);
  if(tc==0) return(0);
  //============================================================
  switch(tc) {
    case 1: { // Start of TC 1

         int a, b, c;
         double s1, s2;
         printf("Enter a = "); scanf("%d",&a);
         printf("Enter b = "); scanf("%d",&b);
         printf("Enter c = "); scanf("%d",&c);
        //==FOR TC 1, WRITE YOUR STATEMENTS FROM HERE=========
		s1=(a+b+c)*1.0/3;
		s2=(a+b+c)*1.0;
        //=========TO HERE============
         printf("s1 = %.3f, s2 = %.3f\n",s1,s2); 

         // OUTPUT for marking:
         printf("\nOUTPUT:\n");
         printf("%.3f  %.3f\n",s1,s2); 

         
        };  break; // The end of TC1     

    case 2: { // Start of TC 2

         int m, n,s;
         printf("Enter m = "); scanf("%d",&m);
         printf("Enter n = "); scanf("%d",&n);

        //== TC 2, WRITE YOUR STATEMENTS FROM HERE =========
		int count=0;
		if(n<=m){
			for(int i=2; i<=n; i+=2)
				s+=i;
		}
		else{
			for(int i=n-1; i>0; i--)
				if(isPrime(i)){
					s+=i; count++; 
					if(count==4)	break;
				}
		}
         //-------------------------------------------------------
         printf("s = %d\n",s);
 
         // OUTPUT for marking:
         printf("\nOUTPUT:\n");
         printf("%d\n",s); 

         
        };  break; // The end of TC2     
         
  }

  printf("\n");
  system ("pause");
  return(0);
}
