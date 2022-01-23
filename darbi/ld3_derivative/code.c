#include<stdio.h>
#include<math.h>
void main(){
float a,b,x,delta_x;
printf("Ievadiet a vertibu: ");
scanf("%f",&a);
printf("Ievadiet b vertibu: ");
scanf("%f",&b);
printf("Ievadiet x vertibu: ");
scanf("%f",&x);
printf("Ievadiet precizitates vertibu: ");
scanf("%f",&delta_x);
b=b*M_PI;
printf("\tx\t\tcos(x)\t\tcos\'(x)\n");
x=a;
while (x<b){
printf("%10.2f\t%10.2f\t%10.2f\n",x,cos(x),(cos(x+delta_x)-cos(x))/delta_x);
x += delta_x;
}
}
