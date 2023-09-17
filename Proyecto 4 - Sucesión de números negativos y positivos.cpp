#include <stdio.h>
#include <locale.h>//Paquete de idiomas

int main (){
	
	setlocale(LC_ALL,"");//Para colocar caracteres especiales
	int i;//Variable de control
	int num1;
	int num2;
	
	printf("Sucesión de números negativos y positivos del 1 al 5:\n\n");
	for (i=1;i<=5;i++){
		num1 = i*(1);
		num2 = i*(-1);
		printf("%d, %d, ", num1, num2);
	}

	return 0;
}
