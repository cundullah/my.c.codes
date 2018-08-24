#include <stdio.h>
#include <stdlib.h>
typedef enum{
	bay,
	bayan
}cinsiyet;
typedef enum{
	pazartesi,
	sali,
	carsamba,
	persembe,
	cuma,
	cumartesi,
	pazar
}gunler;
typedef struct{
	int yas;
	char * isim;
	cinsiyet c;
	gunler tatilgunu;
} insan;
int emeklimi(insan *birey){
	if(birey->c == bay && birey->yas > 55)
		return 1;
	if(birey->c == bayan && birey->yas > 50)
		return 1;
		
		return 0;
}
int main(){
	int a;
	insan ali;
	insan *veli;
	veli=(insan*) malloc(sizeof(insan));
	veli -> yas = 40;
	ali.yas=60;
	ali.c=bay;
	
		printf("alinin yasi : %d\n",ali.yas);
		printf("alinin cinsiyeti : %u\n", ali.c);
		printf("tatil gunu : %u\n",ali.tatilgunu);
		printf("velinin yasi : %d\n",veli->yas);
		printf("ali emekli mi : %d\n",emeklimi(&ali));
		printf("veli emekli mi : %d\n",emeklimi(veli));
}
		


