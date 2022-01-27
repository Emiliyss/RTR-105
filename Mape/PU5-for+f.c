#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,x=1, fakt=1, realfakt=1,k;
    long long faktl=1, realfaktl=1;
    char faktc=1, realfaktc=1;
    char tips;
    printf("Ievadiet decimalo skaitli: ");
    scanf("%d", &a);
    k=a;
    printf("Izveleties datu tipu: c/i/l (char/int/long long) ");
    scanf("%s", &tips);
 
     if (tips == 'c'){
            for (x=1; x <= k; x++) {
            fakt=fakt*x;
            faktc=fakt;
           if (realfaktc>faktc){
               printf("Faktorials no jusu skaitla nav integer robezas, maksimums ir skaitla 5 ");
                break;}
            realfaktc=faktc;
            }
            
           printf("Faktorials: %d \n",realfaktc);
    }
 
 
    if (tips == 'i'){
            for(x=1; x <= k; x++){ 
            fakt*=x;
            if (realfakt>fakt){
                printf("Faktorials no jusu skaitla nav integer robezas, maksimums ir skaitla 13 ");
                break;}
            realfakt=fakt;
            }
            
            printf("Faktorials: %d\n",realfakt);
    }

    if (tips == 'l'){
            for(x=1; x <= k; x++){ 
            faktl*=x;
            if (realfaktl>faktl){
                printf("Faktorials no jusu skaitla nav integer robezas, maksimums ir skaitla 20 ");
                break;}
            realfaktl=faktl;
            }
            
            printf("Faktorials: %lld\n",realfaktl);
    }

    return 0;
}
