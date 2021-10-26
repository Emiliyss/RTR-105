//Ne ļoti racionāli, bet pēc uzdevuma nosacījuma viss ir izpildīts. Nu, vismaz darbs ir godprātīgi izstrādāt, nenorakstīts no interneta. Ar funkciju ATOI iepazīstinājos internetā
//es saprotu, ka vajadzēja pildīt pavisam citādi, bet pagaidām pareizo variantu nesaprotu
//mainīgais Z bija izveidots, lai pārrakstītu bināro kodu pareizajā virzienā, līdzi šim 1(dec) izskatījās kā 10000000(bin)

#include <stdio.h>
#include <stdlib.h>
int main() {
	printf("Ievadiet skaitli līdz 255\n ");
	printf("Jūsu skaitļa binārais kods: ");
	unsigned int sk,i,z;
	z = 1;
	char bin[8];
	scanf("%s", &bin);
	sk = atoi(bin);
	for (i = 0; i < 16; i++) {
	if (i>7) { printf("%d", bin[i-z]); z +=2 ; continue;};
	if (sk%2 != 0) {bin[i]=1; sk = sk-->>1;} else {bin[i]=0; sk = sk>>1;}
	}
	return 0;
}
