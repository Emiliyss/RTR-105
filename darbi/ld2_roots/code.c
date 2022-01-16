#include<stdio.h>
#include<math.h>
int main(){
float a,b,c,x,prec,funkca,funkcb,funkcx;
int k=0;
printf("Ievadiet a vertibu: ");
scanf("%f",&a);
printf("Ievadiet b vertibu: ");
scanf("%f",&b);
printf("Ievadiet c vertibu: ");
scanf("%f",&c);
printf("Ievadiet precizitates vertibu: ");
scanf("%f",&prec);
funkca = cos(a); funkcb = cos(b) ;
if (funkca*funkcb >0){
printf("Intervala [%.2f;%.2f] cos(x)=%lf funkcijaisaknu nav (vai taja ir paru saknu skaits)",a,b,c);
return 1;}
while((b-a)>prec){
k++;
x=(a+b)/2.;
if(funkca*cos(x)>0)
a=x;
else
b=x;
printf("%2d. iteraacija: cos(%lf)=%lf\t",k,a,cos(a));
printf("cos(%lf)=%lf\t",x,cos(x));
printf("cos(%lf)=%lf\n",b,cos(b));}
printf("Sakne atrodas pie x=%lf , jo cos(x) ir %lf\n",x,cos(x));
return 0;}
