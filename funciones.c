#include "funciones.h"


complex suma(complex a,complex b){
	complex r;
	r.real=a.real+b.real;
	r.img=a.img+b.img;
	return r;
}

complex resta(complex a, complex b){
	complex r;
	r.real=a.real-b.real;
	r.img=a.img-b.img;
	return r;
}
complex multi(complex a, complex b){
	complex r;
	r.real=(a.real*b.real)-(a.img*b.img);
	r.img=(a.real*b.img)+(a.img*b.real);
	return r;
}

complex div(complex a,complex b){
	complex r;
	r.real=((a.real*b.real)+(a.img*b.img))/(b.real*b.real+b.img+b.img);
	r.img=((a.img*b.real)-(a.real*b.img))/(b.real*b.real+b.img+b.img);
	return r;
}
complex conj(complex a){
	complex r;
	r.real=a.real;
	r.img=-a.img;
	return r;
}



int menu(){
	int x;
	printf("    Menu\n  1)Suma\n  2)Resta\n  3)Multiplicacion\n  4)Division\n  5)Conjugado\n  6)Salida\n->");
	scanf("%d",&x);
	return x;
}

void print_complex(complex a){
	if(a.img<0){
		printf("%f %fi\n",a.real,a.img);
	}
	else{
		printf("%f+%fi\n",a.real,a.img);
	}
}

void leer_complex(complex *a){
	printf("Ingresa la parte real\n->");
	scanf("%f",&a->real);
	printf("Ingresa la parte imaginaria\n->");
	scanf("%f",&a->img);
}	

