#include <stdio.h>
#include <string.h>

main(){
	char cumle[150];
	int harfsay=0,a,kelimesay=1,sayac=0;
	printf("Cumle gir ");
	gets(cumle);
	a = strlen(cumle);
	for(int i=0 ; i<a; i++){
		sayac++;
		harfsay++;
		
		if(cumle[i]== ' '){
			harfsay--;
			kelimesay++;
			sayac=0;
		}
		if(sayac==1){
			cumle[i] -=32;
		}	
		if(cumle[i] == '.'){
			harfsay--;
		}
		if(cumle[i] == ','){
			harfsay--;
		}		
	}

printf("\n%d tane harf var %d tane kelime ",harfsay,kelimesay);
for(int i=0 ; i<a; i++){
	printf("%c",cumle[i]);
	}
}
