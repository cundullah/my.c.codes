#include<stdio.h>
int main(){
	int a=10;
	int *p;
	p=&a;
		printf("%d\n",*p);//p'nin g�sterdi�i yer
		printf("%d\n",p);//p'nin de�eri(g�sterdi�i yerin adresi)
		printf("%d\n",a);//a'n�n de�eri
		printf("%d\n",&a);//a'n�n adresi
		printf("%d\n",&p);//p'nin adresi
}
