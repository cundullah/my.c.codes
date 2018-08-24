#include<stdio.h>
int main(){
	int x;
	int eb = 0;
	int i;
	for (i=0;i<5;i++){
			scanf("%d", &x);
			printf("simdiye kadar en buyuk x : %d");
	if (x>eb)
					eb=x;
	}
			printf("eb : %d",eb);
}
