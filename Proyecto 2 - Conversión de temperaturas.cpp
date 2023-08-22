#include <stdio.h>
#include <stdlib.h>//Idiomas
#include <locale.h>//Idiomas principalmente
#include <windows.h>//Colores y función Sleep

int main ()
{
	setlocale(LC_ALL, "");//Agregar idiomas
	
	system("cls");//Cambiar colores
	system("color 30");//Fondo azul letras negras
	

	/*Variables*/
	int decision;//Variable declarada para elegir °C O °F (0 o 1)
	float temperatura;//Variable declarada para guardar temp y mostrarla al final
	float temperaturaFinal;//Variable declarada para guardar las operaciones
	char gradosC[]="°C";
	char gradosF[]="°F";
 
 
 	/*Letras aparecen poco a poco*/
	char titulo[]={"\v\t\t\t\t°F <---> °C\a\v"};//Variable de texto. \a = sonido
	int i=0;//Declarar variable entera
	for(i=0;i<18;i++){//Bucle que comienza en 0 e incrementa su valor siempre que sea menor que 1
		printf("%c ",titulo[i]);
		Sleep(100);//Pausa la ejecución 100 milisegundos
	}


	/*Indicar qué opciones hay (ingresar 0 o 1)*/
	printf("\v\tSi desea convertir grados Celsius a Fahrenheit presione 0\n");//%4s mover a la derecha
	printf("\tSi desea convertir grados Fahrenheit a Celsius presione 1\v\v");
	

	/*Parpadeo de una frase*/
	int l;//Declarar variable entera
    for (l = 0; l < 3; l++) {//Se ejecuta 3 veces
        
		printf("\rIntroduzca 0 ó 1 por favor:");//\r mueve el cursor al principio de la línea (borra lo anterior)
        fflush(stdout);//Envía texto anterior a la consola
        Sleep(800); // Tiempo en pantalla (1000 milisegundos=1 segundo)
        printf("\r                               ");
        fflush(stdout);
        Sleep(400);//Tiempo que desaparece el texto
    }


	/*Introducir 0 o 1*/
	printf("\rIntroduzca 0 ó 1 por favor:");
	scanf("%d",&decision);//Usuario debe introducir 1 o 2
	
	
	/*Condiciones dependiendo del número ingresado*/
	if(decision==0){//Condición para 1
	
	printf("\v\vIngrese grados Celsius:");
	scanf("%f",&temperatura);//Ingresar °C
	
	printf("\033[1;37m");//Bold blanco
	printf("\033[46m");//Fondo Cyan
	temperaturaFinal =(temperatura*9/5)+32;//°C-->°F
	printf("\v%.2f %s equivalen a %.2f %s", temperatura, gradosC, temperaturaFinal, gradosF);//Mensaje final de equivalencia
}
	else if (decision==1){//Condición para 1

	printf("\v\vIngrese grados Fahrenheit:");
	scanf("%f",&temperatura);//Ingresar °F
	
	printf("\033[1;37m");//Bold blanco
	printf("\033[46m");//Fondo Cyan
	temperaturaFinal =(temperatura-32)*5/9;//°F-->°C
	printf("\v%.2f %s equivalen a %.2f %s",temperatura, gradosF, temperaturaFinal, gradosC);//%.2f = 2 puntos decimales
}
	else{//Condición para todo lo demás =! 0 ó 1
	
	printf("\033[1;37m");//Bold blanco
	printf("\033[46m");//Fondo Cyan
	printf("\v\v¡Error!\nDebe introducir 0 ó 1.");
	}
	
	// https://gist.github.com/vratiu/9780109 = link colores
	// https://gist.github.com/abritinthebay/d80eb99b2726c83feb0d97eab95206c4 = link códigos de escape
	
	return 0;
}
