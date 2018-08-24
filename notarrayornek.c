#include<stdio.h>
int main(){
	int a[10];
	int i;
		for(i=0;i<10;i++){
			printf("ogrenci %d notunu giriniz",i);
			scanf("%d" ,&a[i]);
		}
	int eb = 0, ek = 100, top=0;
		for(i=0;i<10;i++){
			if(a[i]>eb)
				eb=a[i];
			if(a[i]<ek)
				ek=a[i];
				top+=a[i];
		}
	int ort=top/10;
		printf("eb : %d ek %d ort %d",eb,ek,ort);
		printf("bir not daha giriniz");
	int yeni;
		scanf("%d", yeni);
	int x = 0;
		for(i=0,;<10;i++){
			if(yeni==a[i]){
				x=1;
					printf("not zaten girilmis");
				break;
			}
		}
			if(x==0){
				printf("not girilmemis");
			}	
}



