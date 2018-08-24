#include<stdio.h>
int main(){
	int a=10;
	int *p;
	p=&a;
		printf("%d\n",*p);//p'nin gösterdiði yer
		printf("%d\n",p);//p'nin deðeri(gösterdiði yerin adresi)
		printf("%d\n",a);//a'nýn deðeri
		printf("%d\n",&a);//a'nýn adresi
		printf("%d\n",&p);//p'nin adresi
}
