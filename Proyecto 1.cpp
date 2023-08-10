#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc,char **argv[])
{
	setlocale(LC_ALL,"");\Para colocar caracteres especiales
	
	printf("Primera Generación (1940-1956)\n");
	printf("Características: \n");
	printf("Grandes, costosas, programación a nivel de lenguaje de máquina y cableado manual para la configuración. \n");
	
	printf("Segunda Generación (1956-1963)\n");
	printf("Características: \n");
	printf("Se introdujo el lenguaje ensamblador y el sistema operativo, más pequeñas y generaban menos calor.\n");
	
	printf("Tercera Generación (1964-1971)\n");
	printf("Características: \n");
	printf("Mayor capacidad de procesamiento y menor tamaño, se introdujeron los sistemas operativos más avanzados, la multiprogramación.  \n");
	
	printf("Cuarta Generación (1971-1980)\n");
	printf("Características: \n");
	printf("Uso generalizado de microprocesadores y chips de memoria, se popularizó la informática personal y se expandió el uso de lenguajes de programación de alto nivel.\n");
	
	printf("Quinta Generación (desde 1980 en adelante)\n");
	printf("Características: \n");
	printf("Avances en inteligencia artificial (IA) y procesamiento paralelo, uso de supercomputadoras para cálculos científicos y aplicaciones complejas, evolución de las interfaces de usuario y sistemas operativos.");
	return 0;
}
