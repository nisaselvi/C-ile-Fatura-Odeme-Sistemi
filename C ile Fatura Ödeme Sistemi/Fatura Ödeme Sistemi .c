#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

		void dekont() //bu k�s�mda fonksiyon kullan�� olmak i�in yaz�y� bu �ekilde ekledim.
		{
		printf("Dekontunuz g�r�nt�lenmi�tir.");
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
	printf("**********************FATURA �DEME S�STEM�**********************\n\n\n");
	
baslangic:	// goto komutunun geri d�n�� kodu.
	printf("---> Yapmak istedi�iniz i�lem nedir? Faturali/Faturasiz (1-2 tu�lay�n�z).\n");
	printf("---> Fatural� ise 1 Faturas�z ise 2 yaz�n�z.\n");
	scanf("%d",&islem_turu);

	
	switch(islem_turu){
		
		case 1:

			printf("---> Kurumunuzu se�iniz(Vodafone(1), Turkcell(2), TurkTelekom(3)): \n ");
			scanf("%d",&Kurum);
			printf("---> Telefon numaran�z� giriniz.\n\n");
			scanf("%d",&tel_no);
			printf("---> %d telefon numaras�na ait %d TL faturan�z bulunmaktad�r.\n\n", tel_no ,fatura);
			printf("---> �demek istiyorsan�z 1 istemiyorsan�z 2'yi kodlay�n. \n ");
			scanf("%d",&odemeKontrol);
			
				 while (odemeKontrol == 1) {
				 	printf("---> �demeniz ger�ekle�tirilmi�tir. Dekontu g�r�nt�lemek istiyor musunuz? \n---> Evet ise 1 Hay�r ise 2 'yi kodlay�n.\n");
				 	scanf("%d",&dekontKontrol);
				 		if (dekontKontrol ==1) {
				 		dekont();  // Fonksiyonu buraya �a��r�yoruz.
				 			odemeKontrol = 5;}
				 				else if (dekontKontrol == 2) {
							  	printf("---> Ba�ka �deme var m� ? Varsa 1 yoksa 2 'yi kodlay�n.\n");
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
			printf("---> Kurumunuzu se�iniz(Vodafone(1), Turkcell(2), TurkTelekom(3)): \n");
			scanf("%d",&Kurum);
			printf("---> Telefon numaran�z� giriniz. \n");
			scanf("%d",&tel_no);
			printf("---> Y�kleyebilecei�iniz miktarlar.\n");
			for (i=0; i<4; i+1) {
				
				printf("%d. %d TL\n",i, faturasizTL[i++]);
			}
			scanf("%d",&faturasizTutar);
				
					switch(faturasizTutar){
					
							case 1: 
							printf("---> 35TL'lik y�klemeniz yap�lm��t�r. Dekont g�r�nt�lemek istiyor musunuz? \n---> Evet ise 1 Hay�r ise 2 'yi kodlay�n\n");
								scanf("%d",&dekontKontrol);
				 			if (dekontKontrol ==1) {
								 	dekont();
				 				
				 				odemeKontrol = 5;}
				 			else if (dekontKontrol == 2) {
							  	printf("---> Ba�ka �deme var m� ? Varsa 1 yoksa 2 'yi kodlay�n.\n");
							  	scanf("%d",&baskaOdeme);
							  			if (baskaOdeme == 1)
							  				goto baslangic;
							  			else if (baskaOdeme == 2);
											odemeKontrol == 1;							  			
										  	goto bitir;	
							  	}  	
							break;
							
							case 2:
								printf("---> 40TL'lik y�klemeniz yap�lm��t�r. Dekont g�r�nt�lemek istiyor musunuz? \n---> Evet ise 1 Hay�r ise 2 'yi kodlay�n\n");
								scanf("%d",&dekontKontrol);
				 			if (dekontKontrol ==1) {
				 				dekont();
				 				odemeKontrol = 5;}
				 			else if (dekontKontrol == 2) {
							  	printf("---> Ba�ka �deme var m� ? Varsa 1 yoksa 2 'yi kodlay�n.\n");
							  	scanf("%d",&baskaOdeme);
							  			if (baskaOdeme == 1)
							  				goto baslangic;
							  			else if (baskaOdeme == 2);
											odemeKontrol == 1;							  			
										  	goto bitir;	
							  	}  	
		
							break;
				
							case 3:
								printf("---> 50TL'lik y�klemeniz yap�lm��t�r. Dekont g�r�nt�lemek istiyor musunuz? \n---> Evet ise 1 Hay�r ise 2 'yi kodlay�n\n");
								scanf("%d",&dekontKontrol);
				 			if (dekontKontrol ==1) {
				 				dekont();
				 				odemeKontrol = 5;}
				 			else if (dekontKontrol == 2) {
							  	printf("---> Ba�ka �deme var m� ? Varsa 1 yoksa 2 'yi kodlay�n.\n");
							  	scanf("%d",&baskaOdeme);
							  			if (baskaOdeme == 1)
							  				goto baslangic;
							  			else if (baskaOdeme == 2);
											odemeKontrol == 1;							  			
										  	goto bitir;	
							  	}  	
				 
							break;
				
							case 4:
							
								printf("---> 100TL'lik y�klemeniz yap�lm��t�r. Dekont g�r�nt�lemek istiyor musunuz? \n---> Evet ise 1 Hay�r ise 2 'yi kodlay�n\n");
								scanf("%d",&dekontKontrol);
				 			if (dekontKontrol ==1) {
				 				dekont();
				 				odemeKontrol = 5;}
				 			else if (dekontKontrol == 2) {
							  	printf("---> Ba�ka �deme var m� ? Varsa 1 yoksa 2 'yi kodlay�n.\n");
							  	scanf("%d",&baskaOdeme);
							  			if (baskaOdeme == 1)
							  				goto baslangic;
							  			else if (baskaOdeme == 2);
											odemeKontrol == 1;							  			
										  	goto bitir;	
							  	}  	
							break;
							
							default: printf("***L�tfen mevcut rakamlardan se�im yap�n�z.***");
							break;
						
			break;
	}
}

bitir:
return 0;
}

