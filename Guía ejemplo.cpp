#include <stdio.h>
#define PI 3.14159

int main (){
	
	int numero =123;
	float valor = 5.6;
	char letter = 'a';
	char letters[20]= "hola"; 
	
	numero = numero + 5;
	printf("valor %d \n", numero);
	
	printf ("palabra %s \n", letters);
	printf ("Color %c, numero %d, pi %f \n", letter, numero, valor);
	printf ("color %s, numero %d, pi %f \n", "azul", 145, 1.1416);
	
	printf("\v-------------------------------------------------------- \v");
	
	int val0r=0;
	val0r += 5;
	printf("Número %d", val0r);
	printf(" %f",PI);
	


	
	printf("\v-------------------------------------------------------- \v");
	int a = 10, b= 20, temp;
	
	printf("Valor de a: %d \n",a);
	printf("Valor de b: %d \n",b);
	printf("Intercambio de valores\n");
	temp=a;a=b;b=temp;
	printf("Nuevo valor de a: %d \n",a);
	printf("Nuevo valor de b: %d \n",b);
	
	return 0;
}
