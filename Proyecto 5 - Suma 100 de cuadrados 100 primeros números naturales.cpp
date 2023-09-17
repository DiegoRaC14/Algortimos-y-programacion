#include <stdio.h>
#include <math.h>//Librería de operaciones matemáticas
#include <locale.h>//Paquete de idiomas

int main (){
	
	setlocale(LC_ALL,"");//Para colocar caracteres especiales
	
	int i;//Variable de control
	int num = 100;
	int sumaNum = 0;
	double potenciaNum;//Necesaria variable double para raíces y potencias
	
	for(i=1;i<=num;i++){
		potenciaNum = pow(i,2);
		sumaNum += potenciaNum;
	}
	printf("La suma del cuadrado de los 100 primeros números naturales es: %d", sumaNum);
		
	return 0;
}
