#include<stdio.h>
int main ()
{
	int x, y, maas=0, ay;
	float ort;
	printf("Kac aydir çalistiginizi yaziniz.");
	scanf("%d",&ay);
	int toplam[maas];
	printf("Aldiginiz maaslari toplam sirasi ile yazin.");
		for(x=0;x<maas;x++)
			{
				scanf("%d",&toplam[x]);
				ay+=toplam[x];
			}
	ort=(float)maas/ay;
	printf("Ortalama maasiniz %f...\n",toplam);
	
}
