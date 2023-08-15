#include <stdio.h>
#include <stdlib.h>//Incluye paquete idiomas, colores
#include <conio.h> //Incluye paquete de colores
#include <locale.h>/*Incluye paquete de idiomas*/
#include <windows.h>/*Incluye paquete de color*/


int main (int argc,char **argv[])
{
	setlocale(LC_ALL,"");//Para colocar caracteres especiales
	/*system("cls"); //Para colocar color de letras (error con la otra forma)*/
	
	int clave;//Variable para ingresar después y seleccionar número
 

 	printf("\v¡HOLA!\v");
 	printf("\nAntes de comenzar vamos a cambiar el color de la consola.\n");
 	printf("\vEscriba el número que desee de acuerdo a la tabla.\n\v");
 
 	printf("| %-10s | %-7s |\n", "Color", "Número");//Encabezados de la tabla
	printf("|------------|---------|\n");//Línea intermedia

    printf("| %-10s | %-7d |\n", "Verde", 1); //Filas de la tabla
    printf("| %-10s | %-7d |\n", "Azul", 2);
    printf("| %-10s | %-7d |\n", "Morado", 3);
    printf("| %-10s | %-7d |\n", "Amarillo", 4);
    printf("| %-10s | %-7d |\n", "Gris", 5);
    printf("| %-10s | %-7d |\n", "Blanco", 6);
    printf("| %-10s | %-7s |\n", "Negro","-");
 printf("Introduzca su número por favor =):");
 scanf("%d",&clave);//Solicitar número
 
switch (clave){ /*Instrucciones dependiendo el número elegido

!!!! 1er número es para el fondo y 2do para el texto*/

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
	printf("Primera Generación (1940-1956)\n");
	printf("Características:\n");
	printf("1.- Grandes y con procesadores lentos.\n2.- Costosas de producir.\n3.- Programación a nivel de lenguaje de máquina y cableado manual para la configuración.\n");
	printf("\v--------------------------------------------------------------------------------------------\v\n");
	
	printf("Segunda Generación (1956-1963)\n");
	printf("Características:\n");
	printf("1.- Se introdujo el lenguaje ensamblador y el sistema operativo.\n2.- Eran más pequeñas.\n3.- Generaban menos calor.\n");
	printf("\v--------------------------------------------------------------------------------------------\v\n");
	
	printf("Tercera Generación (1964-1971)\n");
	printf("Características:\n");
	printf("1.- Mayor capacidad de procesamiento y menor tamaño\n2.- Se introdujeron los sistemas operativos más avanzados.\n3.- Surge la multiprogramación.\n");
	printf("\v--------------------------------------------------------------------------------------------\v\n");
		
	printf("Cuarta Generación (1971-1980)\n");
	printf("Características:\n");
	printf("1.- Uso generalizado de microprocesadores y chips de memoria.\n2.- Se popularizó la informática personal.\n3.- Se expandió el uso de lenguajes de programación de alto nivel.\n");
	printf("\v--------------------------------------------------------------------------------------------\v\n");
		
	/* printf("\033[0;31m"); (Color rojo con 31)*/		
	printf("Quinta Generación (desde 1980 en adelante)\n");
	/* printf("\033[0;0m"); (Color normal con 30)*/	
	printf("Características:\n");
	printf("1.- Avances en inteligencia artificial (IA) y procesamiento paralelo.\n2.- Uso de supercomputadoras para cálculos científicos y aplicaciones complejas.\n3.- Evolución de las interfaces de usuario y sistemas operativos.\n");
	printf("\v--------------------------------------------------------------------------------------------\v\n");
	return 0;
}
