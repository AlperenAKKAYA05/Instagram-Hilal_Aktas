#include <stdio.h>
// T�rk�e Karekter K�t�phanesi
#include<locale.h>

int main() {
    int x,y, n=0;
    // Ka� defa nokta girilmesi gerekti�ini kulan�c�ya girdirdi�imiz k�s�m.
    printf("Kac nokta gireceksiniz:" );
	scanf("%d",&n);
	
// While d�ng�s� ile girilen say� kadar d�ng�y� tekrarlatmak i�in.
while(n!=0) {
	
// T�rk�e karekterleri tan�mlamak i�in.
setlocale(LC_ALL, "Turkish");
// Kullan�c� Kordinatlar� 1,2 gibi virg�lle girebilir e�er sadece
// 03 gibi de�er girilmesini istersen virg�l� scanf("%d,%d",&x,&y);
// %d,%d aras�ndan sil bo�lukta kulana bilirsin istersen istedi�in gibi
// �ekillendire bilirsin.
printf("\nNokta koordinatlar�n� giriniz: (x,y):");
scanf("%d,%d",&x,&y);

// Orijinde mi? Y Eksenindemi? yoksa X Eksenindemi?
if(x>0 && y>0){
	printf("\n A b�lgesindedir.");
}
if(x<0 && y>0){
	printf("\n B b�lgesindedir.");
}
if(x<0 && y<0){
	printf("\n C b�lgesindedir.");
}
if(x>0 && y<0){
	printf("\n D b�lgesindedir.");
}

// Orijinde mi? Y Eksenindemi? yoksa X Eksenindemi?
if(x==0 && y==0){
	printf("Orijindedir");
}
else if(x==0){
	printf("Y Ekseni �zerindedir.");
}
else{
	printf("X Ekseni �zerindedir.");
}
// Ka� nokta girilecekse girilen say�dan -1 ��kar�rmay� sa�lar?
n--;
}
	getch();
}

