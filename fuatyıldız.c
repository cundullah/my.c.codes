#include <stdio.h>
 int main(){
 	int s = 5;
 	int a = 6, v = 1;
 		printf("%d",s+v);//sýradan toplama iþlemi
 		printf("\n%d",v>>2);//ikilik tabanda 1-> 00000001 iki sola kaydýrýlýrsa 0 olur
 		printf("\n%d",a<<2);//ikilik tabanda 6-> 00000110 iki saða kaydýrýlýrsa 00011000-> 24(8+16)
 		printf("\n%d",a%s);//Remainder, modulo [6 (mod5)]
 		printf("\n%d",s==v);//deðerler eþit mi sorusu, eþitse 1 deðilse 0
 		printf("\n%d",s>v);//büyüktür küçüktür komutu
 		printf("\n%d",v++);//post increment(post=sonra) v++, v deðerini aynen basýp 1 arttýrýr
 		printf("\n%d",++v);//pre increment(pre=önce) ++v, deðeri gene 1 arttýrýr (toplam 2 artmýþ olur) ve v+2 deðerini basar
 		printf("\n%d",s+v*2);//5+1*2 sonucu 7 olmasý lazýmken 11 çýkýyor (++v deðerini mi alýyor acaba?)
 		printf("\n%d",s+a*2);// 5+6*2 sonucu 17 doðru
 			return 0;
 }
 
