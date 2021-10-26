#include <stdio.h>

int main() {
	printf("Ievadiet trīs mazus burtus bez atstarpēm\n ");
	printf("1 - A-Z secība; 0 - Z-A secība\n ");
	printf("Piemēram, (abc1): abc, bet (abc0): cba\n\n ");
	printf("Jūsu secība: ");
	char w[4];
	scanf("%s", &w);
	char min = w[0];
	char max = w[0];
	char vid;
	int i,o,p;
	for (i=0; i<3; i++){
		if (w[i]<min){min = w[i];}
	}
	for (o=0; o<3; o++){
		if (w[o]>max){max = w[o];}
	}
		for (p=0; p<3; p++){
	if (w[p]!= w[i] && w[p] != w[o]) {vid = w[p];}
	}
	
	if (w[3] == 49) {printf("%c%c%c", min,vid,max);} else {printf("%c%c%c", max,vid,min);}
	
	return 0;
}
