#include <stdio.h>
#include <locale.h>//Paquete de idiomas

int main (){
	
	setlocale(LC_ALL,"");//Para colocar caracteres especiales
	int i;//Variable de control
	int potencia1;
	int potencia2;
	
	printf("Sucesión de números negativos y positivos del 1 al 5:\n\n");
	for (i=1;i<=5;i++){
		potencia1 = i*(1);
		potencia2 = i*(-1);
		printf("%d, %d, ",potencia1, potencia2);
	}

	return 0;
}
