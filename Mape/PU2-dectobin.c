#include <stdio.h>

int main() {
	printf("Ievadiet skaitli līdz 255\n ");
	printf("Jūsu skaitļa binārais kods: ");
	unsigned int sk,i,z;
	z = 1;
	int bin[8];
    scanf("%d", &sk);
	for (i = 0; i < 16; i++) {
	if (i>7) { printf("%d", bin[i-z]); z +=2 ; continue;};
	if (sk%2 != 0) {bin[i]=1; sk = sk-->>1;} else {bin[i]=0; sk = sk>>1;}
	}
	return 0;
}
