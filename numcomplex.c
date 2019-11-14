#include "funciones.h"

int main(){
	complex a,b;
	complex res;
	int x;
	x=0;
	while(x!=6){
		x=menu();
		switch(x){
			case 1:
				leer_complex(&a);
				leer_complex(&b);
				res= suma(a,b);
				print_complex(res);
				break;
			case 2:
				leer_complex(&a);
				leer_complex(&b);
				res= resta(a,b);
				print_complex(res);
				break;
			case 3:
				leer_complex(&a);
				leer_complex(&b);
				res= multi(a,b);
				print_complex(res);
				break;
			case 4:
				leer_complex(&a);
				leer_complex(&b);
				res= div(a,b);
				print_complex(res);
				break;
			case 5:
				leer_complex(&a);
				
				res= conj(a);

				print_complex(res);
				break;
		}
	}
}
