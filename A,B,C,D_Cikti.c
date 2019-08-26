#include  <stdio.h>
 
main(){
int A, B, C, D;

	A=1; //A=1
	B=A+3; //B=4
	C=2*A+B-2; //C=4
	D=2*C-A+B; //D=11
	
if(B+C<D-4){	//8<7 koþularý saðlayamadýðý için if'i atlar else geçer.
	C=B-A+4;
	A=C-2;
	B=A+B-2;
}
else{	//else sonrasý: A=4, B=10, C=1, D=11
	C=B+A-4;
	A=C+3;
	B=A+B-C+3;
}

if(C+3<A+2){	//4<6 koþularý saðlar if yapsýný kullanýr.
	B=A-2*C; // A=4, B=2, C=1, D=11 olur
}
else{//if yapýsý koþulu saðladýðý için iþlemez
	B=2*C+3;
}

if(A+B>10){ //6>10 if yapsýnda istenen koþullarý saðlamaz baþka seçenek
			// olmadýðý için altaki yapýya geçer
	A=B-C+4;
	B=D-A+4;
}

if(B-D<2){	//-9<2 koþulu saðlar 
	D=A+C-5; // A=4, B=10, C=1, D=0 olur
}
else{	// if yapýsý koþulu saðladýðý için else iþlemez
	C=B-D+2*A;
	B=D+C-3;
}

if(A-B>5){	//2>5 koþulu saðlamaz else geçer
	D=B-2*A+4;
}
else{ // else sonrasý  A=4, B=14, C=1, D=6
	D=A+2*B-2;
	B=A-B+2*D;
}
C=2*A-B+D-2; // koþul istemez C'yi hesaplar

printf("A= %4d	B= %4d	C= %4d	D= %4d", A, B, C, D); // Hesaplanan A,B,C,D'yi ekrana yazar.
// A=4, B=14, C=-2, D=6
getch();
}
