#include<stdio.h>
#include<math.h>
double mans_kosinuss(double x) {
double a,S,a0,a499,a500,s0,s499,s500;
int k=0,c=0;
a=pow(-1,k)*pow(x,2*k)/1;
S=a;
a0=a; s0=S;
printf("a0 = %.2f     S0   = %.2f\n",a0,s0);
while (k<500){
k++;
c=k;
a = a*(-1)*x*x/((2*k)*(2*k-1));
S = S+a;
if (c==499){a499=a; s499=S;};
if (c==500){a500=a; s500=S;};
}
printf("a499 = %.2f  S499 = %.2f\n",a499,s499);
printf("a500 = %.2f   S500 = %.2f\n",a500,s500);
return S;
}

void main(){
double x,y,yy;
printf("Ievadiet vertibu: ");
scanf("%lf",&x);
y = cos(x);
printf("Cos aprekinasana:\n");
printf("Ievadi argumentu x: %.0f\n",x);
printf("cos(%.2f) = %.2f\n",x,y);
printf("\n");
yy = mans_kosinuss(x);
printf("cos(%.2f) caur summu:(%.2f)= %.2f \n\n",x,x,yy);
printf("\n");
printf("          500\n");
printf("         _____\n");
printf("         \\          k    2*k\n");
printf("          \\     (-1)  * x \n");
printf("cos(%.2f) = > _______________      \n",x);
printf("           /        (2*k)!\n");
printf("          /____        \n");
printf("           k=0\n");
printf("\n");
printf("                                2 \n");
printf("                          (-1)*x\n");
printf("rekurences reizinatajs: _____________ \n");
printf("                        (2*k)*(2*k-1)  \n");
}
