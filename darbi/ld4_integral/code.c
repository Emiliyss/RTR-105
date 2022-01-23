#include<stdio.h>
#include<math.h>
void main() {
float a,b,eps,h,integr1=0.,integr2;
int k,n=2;
printf("Ievadiet a vertibu: ");
scanf("%f",&a);
printf("Ievadiet b vertibu: ");
scanf("%f",&b);
printf("Ievadiet precizitates vertibu: ");
scanf("%f",&eps);
integr2=(b-a)*(cos(a)+cos(b))/n ;
while(fabs(integr2-integr1)>eps){
n*=2;
h=(b-a)/n ;
integr1=integr2;
integr2=0.;
for(k=0;k<n;k++)
integr2+=h*cos(a+(k+0.5)*h);
}
printf("Integrala vertiba: %.2f\n",integr2);
}
