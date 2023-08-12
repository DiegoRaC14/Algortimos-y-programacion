#include <stdio.h>
#include <stdlib.h>//Incluye paquete idiomas, colores
#include <conio.h> //Incluye paquete de colores
#include <locale.h>/*Incluye paquete de idiomas*/
#include <windows.h>/*Incluye paquete de color*/


int main (int argc,char **argv[])
{
	setlocale(LC_ALL,"");//Para colocar caracteres especiales
	/*system("cls"); //Para colocar color de letras (error con la otra forma)*/
	
	int clave;//Variable para ingresar despu�s y seleccionar n�mero
 

 	printf("\v�HOLA!\v");
 	printf("\nAntes de comenzar vamos a cambiar el color de la consola.\n");
 	printf("\vEscriba el n�mero que dese� de acuerdo a la tabla.\n\v");
 
 	printf("| %-10s | %-7s |\n", "Color", "N�mero");//Encabezados de la tabla
	printf("|------------|---------|\n");//L�nea intermedia

    printf("| %-10s | %-7d |\n", "Verde", 1); //Filas de la tabla
    printf("| %-10s | %-7d |\n", "Azul", 2);
    printf("| %-10s | %-7d |\n", "Morado", 3);
    printf("| %-10s | %-7d |\n", "Amarillo", 4);
    printf("| %-10s | %-7d |\n", "Gris", 5);
    printf("| %-10s | %-7d |\n", "Blanco", 6);
    printf("| %-10s | %-7s |\n", "Negro","-");
 printf("Introduzca su n�mero por favor =):");
 scanf("%d",&clave);//Solucitar n�mero
 
switch (clave){ /*Instrucciones dependiendo el n�mero elegido

!!!! 1er n�mero es para el fondo y 2do para el texto*/

	case 1:
	system("color 27");//Verde
	break;
		
	case 2:
	system("color 37");//Azul
	break;
	
	case 3:
	system("color 57");//Morado
	break;
	
	case 4:
	system("color 67");//Amarillo
	break;
	
	case 5:
	system("color 87");//Gris
	break;
	
	case 6:
	system("color f0");//Blanco letras negras
	break;
}
	

	//system("color 1f"); Color de letras
	
	printf("\v--------------------------------------------------------------------------------------------\v\n");
	printf("Primera Generaci�n (1940-1956)\n");
	printf("Caracter�sticas:\n");
	printf("1.- Grandes y con procesadores lentos.\n2.- Costosas de producir.\n3.- Programaci�n a nivel de lenguaje de m�quina y cableado manual para la configuraci�n.\n");
	printf("\v--------------------------------------------------------------------------------------------\v\n");
	
	printf("Segunda Generaci�n (1956-1963)\n");
	printf("Caracter�sticas:\n");
	printf("1.- Se introdujo el lenguaje ensamblador y el sistema operativo.\n2.- Eran m�s peque�as.\n3.- Generaban menos calor.\n");
	printf("\v--------------------------------------------------------------------------------------------\v\n");
	
	printf("Tercera Generaci�n (1964-1971)\n");
	printf("Caracter�sticas:\n");
	printf("1.- Mayor capacidad de procesamiento y menor tama�o\n2.- Se introdujeron los sistemas operativos m�s avanzados.\n3.- Surge la multiprogramaci�n.\n");
	printf("\v--------------------------------------------------------------------------------------------\v\n");
		
	printf("Cuarta Generaci�n (1971-1980)\n");
	printf("Caracter�sticas:\n");
	printf("1.- Uso generalizado de microprocesadores y chips de memoria.\n2.- Se populariz� la inform�tica personal.\n3.- Se expandi� el uso de lenguajes de programaci�n de alto nivel.\n");
	printf("\v--------------------------------------------------------------------------------------------\v\n");
		
	/* printf("\033[0;31m"); (Color rojo con 31)*/		
	printf("Quinta Generaci�n (desde 1980 en adelante)\n");
	/* printf("\033[0;0m"); (Color normal con 30)*/	
	printf("Caracter�sticas:\n");
	printf("1.- Avances en inteligencia artificial (IA) y procesamiento paralelo.\n2.- Uso de supercomputadoras para c�lculos cient�ficos y aplicaciones complejas.\n3.- Evoluci�n de las interfaces de usuario y sistemas operativos.\n");
	printf("\v--------------------------------------------------------------------------------------------\v\n");
	return 0;
}
