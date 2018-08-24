#include <stdio.h>
int main (){
	int x,y,z;
		printf("[1] -> Toplama\n");
		printf("[2] -> Cikarma\n");
		printf("[3] -> Carpma\n");
		printf("[4] -> Bolme\n");
		printf("Hangi islemi yapmak istiyorsan sec:"); scanf("%d",&z);
			
			switch(z){
				case 1:
					printf("Hangi iki sayi arasinda bu islem yapilsin?");
					scanf("%d %d\n",&x,&y);
					printf("Sonuc: %d\n",x+y);
												break;
				case 2:
					printf("Hangi iki sayi arasinda bu islem yapilsin?");
												break;
					scanf("%d %d\n",&x,&y);
					printf("Sonuc: %d\n",x-y);
				case 3:
					printf("Hangi iki sayi arasinda bu islem yapilsin?");
												break;
					scanf("%d %d\n",&x,&y);
					printf("Sonuc: %d\n",x*y);
				case 4:
					printf("Hangi iki sayi arasinda bu islem yapilsin?");
												break;
					scanf("%d %d\n",&x,&y);
					printf("Sonuc: %d\n",x/y);
				default:
					printf("Duzgun gir su sayiyi.\n");
			}
		printf("S a y i d a n    k u r t u l .\n");
}
