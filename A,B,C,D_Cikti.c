#include  <stdio.h>
 
main(){
int A, B, C, D;

	A=1; //A=1
	B=A+3; //B=4
	C=2*A+B-2; //C=4
	D=2*C-A+B; //D=11
	
if(B+C<D-4){	//8<7 ko�ular� sa�layamad��� i�in if'i atlar else ge�er.
	C=B-A+4;
	A=C-2;
	B=A+B-2;
}
else{	//else sonras�: A=4, B=10, C=1, D=11
	C=B+A-4;
	A=C+3;
	B=A+B-C+3;
}

if(C+3<A+2){	//4<6 ko�ular� sa�lar if yaps�n� kullan�r.
	B=A-2*C; // A=4, B=2, C=1, D=11 olur
}
else{//if yap�s� ko�ulu sa�lad��� i�in i�lemez
	B=2*C+3;
}

if(A+B>10){ //6>10 if yaps�nda istenen ko�ullar� sa�lamaz ba�ka se�enek
			// olmad��� i�in altaki yap�ya ge�er
	A=B-C+4;
	B=D-A+4;
}

if(B-D<2){	//-9<2 ko�ulu sa�lar 
	D=A+C-5; // A=4, B=10, C=1, D=0 olur
}
else{	// if yap�s� ko�ulu sa�lad��� i�in else i�lemez
	C=B-D+2*A;
	B=D+C-3;
}

if(A-B>5){	//2>5 ko�ulu sa�lamaz else ge�er
	D=B-2*A+4;
}
else{ // else sonras�  A=4, B=14, C=1, D=6
	D=A+2*B-2;
	B=A-B+2*D;
}
C=2*A-B+D-2; // ko�ul istemez C'yi hesaplar

printf("A= %4d	B= %4d	C= %4d	D= %4d", A, B, C, D); // Hesaplanan A,B,C,D'yi ekrana yazar.
// A=4, B=14, C=-2, D=6
getch();
}
