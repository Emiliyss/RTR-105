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
            while(x <= k){ 
            fakt=fakt*x;
            faktc=fakt;
            x++;
           if (realfaktc>faktc){
               printf("Faktorials no jusu skaitla nav integer robezas, maksimums ir skaitla 5 ");
                break;}
            realfaktc=faktc;
            }
            
           printf("Faktorials: %d \n",realfaktc);
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
