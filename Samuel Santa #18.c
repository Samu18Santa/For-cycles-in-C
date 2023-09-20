/*- Fecha de publicación: 2023-09-24
- Hora: 2:00 p.m
- Versión de su código: 1.0
- Autor. Ing(c) Samuel Santa Martínez
- Nombre del lenguaje utilizado: C
- Versión del lenguaje utilizado: C18
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Asignatura IS284 Programación II
- El siguiente programa genera las siguientes ternas de enteros:
1 1 1
2 1 2
3 1 3
4 2 1
5 2 2
6 2 3
7 3 1
8 3 2
9 3 3
- Salvedad: El programa  no admite ingreso de datos
*/
#include <stdio.h>

int main()
{
    int columna1 = 1, columna2 = 1, columna3 = 1;//se declaran las variables necesarias para el programa, columna1, columna2 y columna3 para los valores de las columnas de la terna

    printf( "Ternas:\n");

    //se declara la variable fila para el ciclo for, se inicializa en 1, se evalua si fila es menor a 10 y se incrementa en 1, esta para cada fila del diseño y para cambiar la secuencia cuando es necesario
    for( int fila = 1; fila < 10; fila++ )
    {
        if( fila % 3 == 0 ){
            printf( "%i %i %i\n", columna1, columna2, columna3 );
            columna1++;
            columna2++;
            columna3 = 1;
        }//de lo contrario
        else{
            printf( "%i %i %i\n", columna1, columna2, columna3 );
            columna1++;
            columna3++;
        }//fin del if
    }//fin del for

    return 0;
}