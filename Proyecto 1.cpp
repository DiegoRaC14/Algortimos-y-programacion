#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc,char **argv[])
{
	setlocale(LC_ALL,"");\Para colocar caracteres especiales
	
	printf("Primera Generaci�n (1940-1956)\n");
	printf("Caracter�sticas: \n");
	printf("Grandes, costosas, programaci�n a nivel de lenguaje de m�quina y cableado manual para la configuraci�n. \n");
	
	printf("Segunda Generaci�n (1956-1963)\n");
	printf("Caracter�sticas: \n");
	printf("Se introdujo el lenguaje ensamblador y el sistema operativo, m�s peque�as y generaban menos calor.\n");
	
	printf("Tercera Generaci�n (1964-1971)\n");
	printf("Caracter�sticas: \n");
	printf("Mayor capacidad de procesamiento y menor tama�o, se introdujeron los sistemas operativos m�s avanzados, la multiprogramaci�n.  \n");
	
	printf("Cuarta Generaci�n (1971-1980)\n");
	printf("Caracter�sticas: \n");
	printf("Uso generalizado de microprocesadores y chips de memoria, se populariz� la inform�tica personal y se expandi� el uso de lenguajes de programaci�n de alto nivel.\n");
	
	printf("Quinta Generaci�n (desde 1980 en adelante)\n");
	printf("Caracter�sticas: \n");
	printf("Avances en inteligencia artificial (IA) y procesamiento paralelo, uso de supercomputadoras para c�lculos cient�ficos y aplicaciones complejas, evoluci�n de las interfaces de usuario y sistemas operativos.");
	return 0;
}
