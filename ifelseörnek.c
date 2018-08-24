#include<stdio.h>
	int main(){
		int mesai;
			printf("Lutfen kac saat calistiginizi yaziniz.");
			scanf("%d", &mesai);
		if (mesai<=10){
			printf("ucret= %d", mesai*5);
		}
		
		else if (mesai<=20)
			printf("ucret= %d ",10*5 + (mesai-10)*3);
		else
			printf("ucret = %d",10*5+10*3+(mesai-20)*2);
	}
