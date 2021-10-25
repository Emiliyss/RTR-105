#include <stdio.h>

int main() {
	printf("Ievadiet skaitli līdz 255\n ");
	printf("Jūsu skaitļa binārais kods: ");
	unsigned int sk;
	int bin[8];
    scanf("%d", &sk);
    z=sk;
	for (int i = 0; i < 8; i++) {
	if (sk%2 != 0) {bin[i]=1; sk = sk-->>1;} else {bin[i]=0;sk = sk>>1;}
	printf("%d", bin[i]);
	}
  
	return 0;
}
