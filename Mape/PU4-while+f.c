#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int a,x=1, fakt=1, realfakt=1,k;
    long long faktl=1, realfaktl=1;
    char xc=1, faktc=1, realfaktc=1, kc;
    char tips;
    printf("Ievadiet decimalo skaitli: ");
    scanf("%d", &a);
    k=a;
    kc=k;
    printf("Izveleties datu tipu: c/i/l (char/int/long long) ");
    scanf("%s", &tips);
 
     if (tips == 'c'){
            while(xc <= kc){ 
            faktc*=xc;
            xc++;
            if (realfaktc>faktc){
                printf("Faktorials no jusu skaitla nav integer robezas, maksimums ir skaitla 5 ");
                break;}
            realfaktc=faktc;
            }
            
            printf("Faktorials: %s \n",realfaktc);
    }
 
 
    if (tips == 'i'){
            while(x <= k){ 
            fakt*=x;
            x++;
            if (realfakt>fakt){
                printf("Faktorials no jusu skaitla nav integer robezas, maksimums ir skaitla 13 ");
                break;}
            realfakt=fakt;
            }
            
            printf("Faktorials: %d\n",realfakt);
    }

    if (tips == 'l'){
            while(x <= k){ 
            faktl*=x;
            x++;
            if (realfaktl>faktl){
                printf("Faktorials no jusu skaitla nav integer robezas, maksimums ir skaitla 20 ");
                break;}
            realfaktl=faktl;
            }
            
            printf("Faktorials: %lld\n",realfaktl);
    }

    return 0;
}
