#include <stdio.h>
 int main(){
 	int s = 5;
 	int a = 6, v = 1;
 		printf("%d",s+v);//s�radan toplama i�lemi
 		printf("\n%d",v>>2);//ikilik tabanda 1-> 00000001 iki sola kayd�r�l�rsa 0 olur
 		printf("\n%d",a<<2);//ikilik tabanda 6-> 00000110 iki sa�a kayd�r�l�rsa 00011000-> 24(8+16)
 		printf("\n%d",a%s);//Remainder, modulo [6 (mod5)]
 		printf("\n%d",s==v);//de�erler e�it mi sorusu, e�itse 1 de�ilse 0
 		printf("\n%d",s>v);//b�y�kt�r k���kt�r komutu
 		printf("\n%d",v++);//post increment(post=sonra) v++, v de�erini aynen bas�p 1 artt�r�r
 		printf("\n%d",++v);//pre increment(pre=�nce) ++v, de�eri gene 1 artt�r�r (toplam 2 artm�� olur) ve v+2 de�erini basar
 		printf("\n%d",s+v*2);//5+1*2 sonucu 7 olmas� laz�mken 11 ��k�yor (++v de�erini mi al�yor acaba?)
 		printf("\n%d",s+a*2);// 5+6*2 sonucu 17 do�ru
 			return 0;
 }
 
