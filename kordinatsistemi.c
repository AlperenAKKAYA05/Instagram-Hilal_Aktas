#include <stdio.h>
// Türkçe Karekter Kütüphanesi
#include<locale.h>

int main() {
    int x,y, n=0;
    // Kaç defa nokta girilmesi gerektiðini kulanýcýya girdirdiðimiz kýsým.
    printf("Kac nokta gireceksiniz:" );
	scanf("%d",&n);
	
// While döngüsü ile girilen sayý kadar döngüyü tekrarlatmak için.
while(n!=0) {
	
// Türkçe karekterleri tanýmlamak için.
setlocale(LC_ALL, "Turkish");
// Kullanýcý Kordinatlarý 1,2 gibi virgülle girebilir eðer sadece
// 03 gibi deðer girilmesini istersen virgülü scanf("%d,%d",&x,&y);
// %d,%d arasýndan sil boþlukta kulana bilirsin istersen istediðin gibi
// þekillendire bilirsin.
printf("\nNokta koordinatlarýný giriniz: (x,y):");
scanf("%d,%d",&x,&y);

// Orijinde mi? Y Eksenindemi? yoksa X Eksenindemi?
if(x>0 && y>0){
	printf("\n A bölgesindedir.");
}
if(x<0 && y>0){
	printf("\n B bölgesindedir.");
}
if(x<0 && y<0){
	printf("\n C bölgesindedir.");
}
if(x>0 && y<0){
	printf("\n D bölgesindedir.");
}

// Orijinde mi? Y Eksenindemi? yoksa X Eksenindemi?
if(x==0 && y==0){
	printf("Orijindedir");
}
else if(x==0){
	printf("Y Ekseni Üzerindedir.");
}
else{
	printf("X Ekseni Üzerindedir.");
}
// Kaç nokta girilecekse girilen sayýdan -1 çýkarýrmayý saðlar?
n--;
}
	getch();
}

