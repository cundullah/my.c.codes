#include <stdio.h>
#include <stdlib.h>
int main(){
	char isim[20];
	char *soyisim;
	soyisim=(char *) malloc(sizeof(char)*20);
	printf("Isim : ");
	scanf("%s", isim);
	printf("Soyisim :");
	scanf("%s", soyisim);
	printf("Tanistigima memnun oldum, %s %s.\n",isim, soyisim);
	printf("ucuncu karakterler : %c %c \n", isim[3],soyisim[3]);
}
