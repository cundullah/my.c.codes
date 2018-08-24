#include <stdio.h>
#include <conio.h>
	int main(){
	int sayi,sayac,mod;
			printf("sayiyi gir\n");
			scanf("%d",&sayi);
	for(sayac=2;sayac<sayi;++sayac){
			mod=sayi%sayac;
	if(mod==0 ) sayac=sayi+1; 
									}
		if(sayac>sayi) printf("sayimiz asal degildir.");
		else printf("sayimiz asaldir.");
	getch();
	return 0;
			}
