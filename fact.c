#include<stdio.h>
	int main(){
		int num;
		int i;
			printf("faktoriyelinin hesaplanmasini istediginiz sayiyi giriniz");
			scanf("%d",&num);
		int fact = 1;
		for(i=1;i<=num;i++){
			fact=fact*i;
		}	printf("%d",fact);
}
			
	
