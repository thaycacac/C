#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void swap(double &a, double &b){
	double temp;
	temp=a;
	a=b;
	b=temp;
}
bool isPrime(int n){
	if(n==0) return false;
	if(n==1) return false;
	for(int i=2; i<=sqrt(n);i++){
		if(n%i==0)	return false;
	}
	return true;
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

         double a, b, c;
         printf("Enter a = "); scanf("%lf",&a);
         printf("Enter b = "); scanf("%lf",&b);
         printf("Enter c = "); scanf("%lf",&c);
         //-------------------------------------------------------
        //==FOR TC 1, WRITE YOUR STATEMENTS FROM HERE=========
		if(a>b) swap(a,b);
		if(a>c) swap(a,c);
		if(b>c) swap(b,c);
        //=========TO HERE============
         printf("a = %.0f, b = %.0f, c =  %.0f\n",a,b,c); 
         // OUTPUT for marking:
         printf("\nOUTPUT:\n");
         printf("%.0f  %.0f  %.0f\n",a,b,c); 
         
        };  break; // The end of TC1     

    case 2: { // Start of TC 2

         int n, s, num;
         bool check;
         printf("Enter n = "); scanf("%d",&n);

        //==FOR TC 2, WRITE YOUR STATEMENTS FROM HERE=========
        s=0;
		while(n!=0){
			num=n%10;
			check=isPrime(num);
			if(check==true)
			n/=10;
		}
         //=========TO HERE============
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
