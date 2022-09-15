#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

		void dekont() //bu kýsýmda fonksiyon kullanýþ olmak için yazýyý bu þekilde ekledim.
		{
		printf("Dekontunuz görüntülenmiþtir.");
		}

int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "Turkish");
	
	int Kurum;
	int tel_no = 0;
	int islem_turu = 0;
	int fatura = 56;
	int odemeKontrol = 1;
	int dekontKontrol = 0;
	int baskaOdeme = 0;
	int faturasizTutar = 0;
	int faturasizTL [] = {35,40,50,100};
	int i;
	printf("\n");
	printf("**********************FATURA ÖDEME SÝSTEMÝ**********************\n\n\n");
	
baslangic:	// goto komutunun geri dönüþ kodu.
	printf("---> Yapmak istediðiniz iþlem nedir? Faturali/Faturasiz (1-2 tuþlayýnýz).\n");
	printf("---> Faturalý ise 1 Faturasýz ise 2 yazýnýz.\n");
	scanf("%d",&islem_turu);

	
	switch(islem_turu){
		
		case 1:

			printf("---> Kurumunuzu seçiniz(Vodafone(1), Turkcell(2), TurkTelekom(3)): \n ");
			scanf("%d",&Kurum);
			printf("---> Telefon numaranýzý giriniz.\n\n");
			scanf("%d",&tel_no);
			printf("---> %d telefon numarasýna ait %d TL faturanýz bulunmaktadýr.\n\n", tel_no ,fatura);
			printf("---> Ödemek istiyorsanýz 1 istemiyorsanýz 2'yi kodlayýn. \n ");
			scanf("%d",&odemeKontrol);
			
				 while (odemeKontrol == 1) {
				 	printf("---> Ödemeniz gerçekleþtirilmiþtir. Dekontu görüntülemek istiyor musunuz? \n---> Evet ise 1 Hayýr ise 2 'yi kodlayýn.\n");
				 	scanf("%d",&dekontKontrol);
				 		if (dekontKontrol ==1) {
				 		dekont();  // Fonksiyonu buraya çaðýrýyoruz.
				 			odemeKontrol = 5;}
				 				else if (dekontKontrol == 2) {
							  	printf("---> Baþka ödeme var mý ? Varsa 1 yoksa 2 'yi kodlayýn.\n");
							  	scanf("%d",&baskaOdeme);
							  			if (baskaOdeme == 1)
							  				goto baslangic;
							  			else if (baskaOdeme == 2);
											odemeKontrol == 1;							  			
										  	goto bitir;	
							  	}  	
				 }
				 
		break;
		
		case 2:
			printf("---> Kurumunuzu seçiniz(Vodafone(1), Turkcell(2), TurkTelekom(3)): \n");
			scanf("%d",&Kurum);
			printf("---> Telefon numaranýzý giriniz. \n");
			scanf("%d",&tel_no);
			printf("---> Yükleyebileceiðiniz miktarlar.\n");
			for (i=0; i<4; i+1) {
				
				printf("%d. %d TL\n",i, faturasizTL[i++]);
			}
			scanf("%d",&faturasizTutar);
				
					switch(faturasizTutar){
					
							case 1: 
							printf("---> 35TL'lik yüklemeniz yapýlmýþtýr. Dekont görüntülemek istiyor musunuz? \n---> Evet ise 1 Hayýr ise 2 'yi kodlayýn\n");
								scanf("%d",&dekontKontrol);
				 			if (dekontKontrol ==1) {
								 	dekont();
				 				
				 				odemeKontrol = 5;}
				 			else if (dekontKontrol == 2) {
							  	printf("---> Baþka ödeme var mý ? Varsa 1 yoksa 2 'yi kodlayýn.\n");
							  	scanf("%d",&baskaOdeme);
							  			if (baskaOdeme == 1)
							  				goto baslangic;
							  			else if (baskaOdeme == 2);
											odemeKontrol == 1;							  			
										  	goto bitir;	
							  	}  	
							break;
							
							case 2:
								printf("---> 40TL'lik yüklemeniz yapýlmýþtýr. Dekont görüntülemek istiyor musunuz? \n---> Evet ise 1 Hayýr ise 2 'yi kodlayýn\n");
								scanf("%d",&dekontKontrol);
				 			if (dekontKontrol ==1) {
				 				dekont();
				 				odemeKontrol = 5;}
				 			else if (dekontKontrol == 2) {
							  	printf("---> Baþka ödeme var mý ? Varsa 1 yoksa 2 'yi kodlayýn.\n");
							  	scanf("%d",&baskaOdeme);
							  			if (baskaOdeme == 1)
							  				goto baslangic;
							  			else if (baskaOdeme == 2);
											odemeKontrol == 1;							  			
										  	goto bitir;	
							  	}  	
		
							break;
				
							case 3:
								printf("---> 50TL'lik yüklemeniz yapýlmýþtýr. Dekont görüntülemek istiyor musunuz? \n---> Evet ise 1 Hayýr ise 2 'yi kodlayýn\n");
								scanf("%d",&dekontKontrol);
				 			if (dekontKontrol ==1) {
				 				dekont();
				 				odemeKontrol = 5;}
				 			else if (dekontKontrol == 2) {
							  	printf("---> Baþka ödeme var mý ? Varsa 1 yoksa 2 'yi kodlayýn.\n");
							  	scanf("%d",&baskaOdeme);
							  			if (baskaOdeme == 1)
							  				goto baslangic;
							  			else if (baskaOdeme == 2);
											odemeKontrol == 1;							  			
										  	goto bitir;	
							  	}  	
				 
							break;
				
							case 4:
							
								printf("---> 100TL'lik yüklemeniz yapýlmýþtýr. Dekont görüntülemek istiyor musunuz? \n---> Evet ise 1 Hayýr ise 2 'yi kodlayýn\n");
								scanf("%d",&dekontKontrol);
				 			if (dekontKontrol ==1) {
				 				dekont();
				 				odemeKontrol = 5;}
				 			else if (dekontKontrol == 2) {
							  	printf("---> Baþka ödeme var mý ? Varsa 1 yoksa 2 'yi kodlayýn.\n");
							  	scanf("%d",&baskaOdeme);
							  			if (baskaOdeme == 1)
							  				goto baslangic;
							  			else if (baskaOdeme == 2);
											odemeKontrol == 1;							  			
										  	goto bitir;	
							  	}  	
							break;
							
							default: printf("***Lütfen mevcut rakamlardan seçim yapýnýz.***");
							break;
						
			break;
	}
}

bitir:
return 0;
}

