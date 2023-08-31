#include <stdio.h>
#include <stdlib.h>//Idiomas
#include <locale.h>//Idiomas principalmente

int main ()
{
	setlocale(LC_ALL, "");//Agregar idiomas
	
	int a;//Variable declarada para ingresar después
	char opc;//Variable usada para do-while
	
	do //Para correr el programa una vez y a partir de aquí volver a correrlo si se cumple 'while'
	{
		printf("\x1b[40A");//Subir el cursor al principio (cuántas líneas se mueve depende del # acompañando a la A
		printf("\x1b[J");//Borramos TODO lo anterior (se puede usar "\x1b[K" para borrar 1 línea anterior (o las que queramos)
		printf("\x1b[5m");//Parpadeo 
		printf("\x1b[33m\v");//Color amarillo
		printf("\t Arbolito de navidad\v");//Título
		printf("\x1b[0m");//Resetear color
		printf("\033[1;93m");//Color amarillo
		
		/*Tabla*/
		printf("\v| %-15s | %-15s |\n", "Número de líneas", "Valor a ingresar"); // Encabezados de la tabla
	    printf("|------------------|------------------|\n"); // Línea intermedia
		printf("| %-16s | %-16d |\n", "Tres", 3); // Filas de la tabla
	    printf("| %-16s | %-16d |\n", "Cinco", 5);
	    printf("| %-16s | %-16d |\v", "Siete", 7);
		
		printf("\v¿Cuántos niveles quieres que tenga tu arbolito? =) : ");
		scanf("%d", &a);
		fflush(stdin);//Después de leer 'a' cualquier valor en el búfer se descarta 
	
		/* Para poner una (\) hay que colocar detrás otra barra invertida
		porque sino la 1ra la detecta como si fuera a poner otro comando*/
		
			if (a==3)//Condición para crear arbolito de 3 líneas
			{
				printf("\033[0;33m");//Estrella amarilla
				printf("\v%17s"," *\n");
				printf("\033[0;32m");//Ramas verdes
				printf("%19s","/|\\ \n");
				printf("%20s","//|\\\\ \n");
				printf("%21s", "///|\\\\\\ \n");
				printf("\x1b[0;38;5;130m");//Tronco café
				printf("%19s", "||| \n");
				printf("%19s", "||| \n");
				printf("\x1b[0m");//Resetear color
				printf("\v\v¿Deseas hacer otro arbolito?\nPresiona 'S' para continuar o 'N' para terminar el programa:");
				scanf("%c",&opc);
					
			}
			else if (a==5)//Condición para crear arbolito de 5 líneas
			{
				printf("\033[0;33m");//Estrella amarilla
				printf("\v%17s"," *\n");
				printf("\033[0;32m");//Ramas verdes
				printf("%19s","/|\\ \n");
				printf("%20s","//|\\\\ \n");
				printf("%21s", "///|\\\\\\ \n");
				printf("%22s", "////|\\\\\\\\ \n");
				printf("%23s", "/////|\\\\\\\\\\ \n");
				printf("\x1b[0;38;5;130m");//Tronco café
				printf("%19s", "||| \n");
				printf("%19s", "||| \n");
				printf("\x1b[0m");//Resetear color
				printf("\v\v¿Deseas hacer otro arbolito?\nPresiona 'S' para continuar o 'N' para terminar el programa:");
				scanf("%c",&opc);	
			}
			else if (a==7)//Condición para crear arbolito de 7 líneas
			{
				printf("\033[0;33m");//Estrella amarilla
				printf("\v%17s"," *\n");
				printf("\033[0;32m");//Ramas verdes
				printf("%19s","/|\\ \n");
				printf("%20s","//|\\\\ \n");
				printf("%21s", "///|\\\\\\ \n");
				printf("%22s", "////|\\\\\\\\ \n");
				printf("%23s", "/////|\\\\\\\\\\ \n");
				printf("%24s", "//////|\\\\\\\\\\\\ \n");
				printf("%25s", "///////|\\\\\\\\\\\\\\ \n");
				printf("\x1b[0;38;5;130m");//Tronco café
				printf("%19s", "||| \n");
				printf("%19s", "||| \n");
				printf("\x1b[0m");//Resetear color
				printf("\v\v¿Deseas hacer otro arbolito?\nPresiona 'S' para continuar o 'N' para terminar el programa:");
				scanf("%c",&opc);
			}
			else 
			{
				printf("\x1b[0m");//Resetear color
				printf("\033[41m\v");//Resaltado rojo para error
				printf("¡Error! Introduce 3, 5 o 7\v");
				printf("\x1b[0m");//Resetear color
				printf("\v¿Deseas volverlo a intentar?\nPresiona 'S' para continuar o 'N' para terminar el programa:");
				scanf("%c",&opc);
			}
		
	} while (opc =='s'|| opc =='S');//Operador lógico disyunción
	printf("\033[0;101m");//Resaltado 
	printf("\vEl programa ha terminado, gracias.");
	printf("\x1b[0m");//Resetear color
	
	return 0;
}				
