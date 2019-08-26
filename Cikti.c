#include  <stdio.h>
 
main(){
int A, B, C, D;

	A=1;
	B=A+3;
	C=2*A+B-2;
	D=2*C-A+B;
	
if(B+C<D-4){
	C=B-A+4;
	A=C-2;
	B=A+B-2;
}
else{
	C=B+A-4;
	A=C+3;
	B=A+B-C+3;
}

if(C+3<A+2){
	B=A-2*C;
}
else{
	B=2*C+3;
}

if(A+B>10){
	A=B-C+4;
	B=D-A+4;
}

if(B-D<2){
	D=A+C-5;
}
else{
	C=B-D+2*A;
	B=D+C-3;
}

if(A-B>5){
	D=B-2*A+4;
}
else{
	D=A+2*B-2;
	B=A-B+2*D;
}
C=2*A-B+D-2;

printf("A= %4d	B= %4d	C= %4d	D= %4d", A, B, C, D);
getch();
}
