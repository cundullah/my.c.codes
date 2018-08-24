#include<stdio.h>
int main(){
	int x;
		printf("Istenilen asal sayi miktari nedir?");
		scanf("%d",&x);
			int y = 0;
			int z =2;
				while(y<x){
					int i;
					int asal=1;
						for(i=2;i<z;i++){
							if(z%i==0)
							asal=0;
						}
							if(asal==1){
								printf("%d\n",z);
								y++;
							}
					z++;
				}
}
