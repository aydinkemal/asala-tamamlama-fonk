#include<stdio.h>


void asalSayiTamamlama(int *ptr);
void main()
{
	int sayi;
	int *ptr;
	
	printf("Asalligini kontrol etmek istediginiz sayiyi giriniz : ");
	scanf_s("%d", &sayi);
	ptr = &sayi;
	
	asalSayiTamamlama(ptr);

	

}


void asalSayiTamamlama(int *ptr)
{
	
	int asalOlma = 0;
	do{
		++*ptr;
		for (int i = 2; i < *ptr; i++)
		{

			if ( *ptr%i == 0)
			{
				asalOlma = 0;
				break;
				
				
			}
			else
			{
				asalOlma = 1;
			}
		}
	
		if (asalOlma == 1)
		{
			printf("Tamamlanan sayi : %d ", *ptr);
		}
		 
	} 
	while (asalOlma != 1);

}
