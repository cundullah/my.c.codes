#include<stdio.h>
int main (){
	int bugun,dogumtarihi;
	printf("Bugunun tarihi nedir?");
	scanf("%d", &bugun);
	printf("Hangi yýlda dogdunuz?");
	scanf("%d",&dogumtarihi);
	printf("%d",bugun-dogumtarihi);
}
