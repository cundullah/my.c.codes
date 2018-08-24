#include<stdio.h>
int main(){
	int n;
	printf("matris boyutu giriniz");
	scanf("%d",&n);
		int a=1;
		int b=1;
		int i;
			for(i=0;i<n;i++){
				int j;
				int p=a;
				int q=b;
					for(j=0;j<n;j++){
						int r=p+q;
						printf("%d\t",p);
						p=q;
						q=r;
					}
				printf("\n");
				int c=a+b;
				a=b;
				b=c;
			}
}
