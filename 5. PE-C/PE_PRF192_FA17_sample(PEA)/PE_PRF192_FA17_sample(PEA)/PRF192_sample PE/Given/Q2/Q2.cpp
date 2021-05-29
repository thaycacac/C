#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void swap(int &a, int &b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}

//note: int &n means that the variable n is passed to the function, not it's copy.
void input(int a[], int &n) { 
    printf("Enter number of elements n = ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++)
      {printf("a[%d] = ",i);
        scanf("%d",&a[i]);
      }
   }

void display(int a[], int n) { 
    for(int i=0;i<n;i++) printf("%d ",a[i]);
     printf("\n"); 
   }

//----------------------------------------------------------------------
double fen(double x, double y, int n)
 {// write statements from here to compelete the function
	double s, s1=1, s2=0, a=1;
	int d=-1;
	for(int i=1; i<=n;i++){
		a*=x/i;
		s1+=a;
	}
	s2=y;
	a=y;
	for(int i=3; i<=n; i+=2){
		a*=y*y/(i*(i-1));
		s2+=d*a;
		d=-d;
	}
	s=s1+s2;
	return (s);
   // return(-1); //This statement must be changed 
 }

void fun(int a[], int &n) { // You should complete this function
  // Write your statements here
 	if(n%2==1){
 		for(int i=n-1; i>=0; i--){
 			for(int j=0; j<i; j++)
 				if(a[j]>a[j+1]) swap(a[j], a[j+1]);
		 }
	 }
	 if(n%2==0){
	 	int max;
	 	max=a[0];
	 	int position=0;
 		for(int i=0; i<n; i++){
 			if(a[i]>max) max=a[i];
 		for(int i=0; i<n; i++)
			 if(a[i]==max)	position=i;
		}
		for(int i=position; i<n-1; i++){
			a[i]=a[i+1];
		}
		n--;
	}
 }


int main() {  // Do not edit this function
  system("cls");
  printf("\nTEST Q2 (4 marks):\n");
  printf("1. Run TC 1 (fen) \n");
  printf("2. Run TC 2 (fun) \n");
  //tc holds the test case number of test
  int tc;
  printf("Enter TC (0 to exit): "); scanf("%d",&tc);
  if(tc==0) return(0);
  //============================================================
  switch(tc) {
    case 1: { // Start of TC 1
         double x,y, s; int n;
         printf("Enter x = "); scanf("%lf",&x);
         printf("Enter y = "); scanf("%lf",&y);
         printf("Enter n = "); scanf("%d",&n);
         s = fen(x,y,n);
         printf("fen(%.1f,%.1f,%d) = %.4f\n",x,y,n,s);
         printf("\nOUTPUT:\n");
         printf("%.4f\n",s); 

        }  break; // end of TC 1       

    case 2: { // Start of TC 2

         int a[100]; int n;
         input(a,n);
         printf("\nThe original array:\n"); 
         display(a,n);
         fun(a,n);
         printf("\nThe array after processing:\n"); 
         display(a,n);

         printf("\nOUTPUT:\n");
         display(a,n);
         printf("\n");

         
        };  break; // The end of TC2     
    }
  printf("\n\n");
  system ("pause");
  return(0);
}
