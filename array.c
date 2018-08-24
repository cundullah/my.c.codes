#include<stdio.h>
int main(){
	int a[] = {3, 8, 7, 2, 6};
	int i;
		for(i=0;i<5;i++){
			printf("a[%d] = %d/n",i,a[i]);
	}
	int gecici;
		for(i=0;i<2;i++){
			gecici=a[i];
			a[i]=a[4-i];
			a[4-i]=gecici;		
		}
		for(i=0;i<5;i++){
			printf("a[%d] = %d/n",i,a[i]);
		}
}		//array örnek
