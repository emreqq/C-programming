#include<stdio.h>
#include<stdlib.h>
int main()
{
	int sayi[10],k;
	for(k=0;k<10;k++)
		{
			sayi[k]=rand();
			printf("sayi[%d]=%d\n",k,sayi[k]);
		}
	printf("rastgele sayi uretimi");
	return 0;
}




