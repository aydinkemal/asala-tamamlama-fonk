#include<stdio.h>

//void asallik(int gelenSayi);
void asalSayiTamamlama(int *ptr);
void main()
{
	int sayi;
	int *ptr;
	
	printf("Asalligini kontrol etmek istediginiz sayiyi giriniz : ");
	scanf_s("%d", &sayi);
	ptr = &sayi;
	
	asalSayiTamamlama(ptr);

	
	/*asallik(sayi);*/
}

//void asallik(int gelenSayi)
//{
//	int asalOlmama = 0;
//	for (int i = 2; i < gelenSayi; i++)
//	{
//
//		if (0 == gelenSayi%i)
//		{
//			asalOlmama = 1;
//		}
//	}
//	if (0 == asalOlmama)
//	{
//		printf("%d sayisi asaldir!", gelenSayi);
//	}
//	else printf("%d sayisi asal degildir!", gelenSayi);
//}
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
