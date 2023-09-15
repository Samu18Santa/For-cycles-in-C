/*- Fecha de publicación: 2023-09-03
- Hora: 4:00 p.m
- Versión de su código: 1.0
- Autor. Ing(c) Samuel Santa Martínez
- Nombre del lenguaje utilizado: C
- Versión del lenguaje utilizado: C18
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Asignatura IS284 Programación II
- El siguiente programa imprime en pantalla el siguiente diseño:
         Z
        Z Z
       Z   Z
      Z     Z
     Z       Z
    Z         Z
   Z           Z
  Z             Z
 Z               Z
Z                 Z
- Salvedad: El programa  no admite ingreso de datos
*/
#include <stdio.h>

int main()
{
    int espaciosIniciales = 9, espaciosMedios = 1;//se declaran las variables necesarias para el programa, espaciosIniciales y espaciosMedios para la cantidad de espacios que se van a imprimir al inicio o medio de cada linea

    //se crea el ciclo for para imprimir el diseño, se declaran las variables i y j, i para el numero de lineas y j para la cantidad de espacios al inicio o medio de cada linea
    for( int i = 1; i <= 10; i++ )
    {
        for( int j = 1; j <= espaciosIniciales; j++ )
            printf( " " );

        if( i != 1 )
            printf( "Z" );

        for( int k = 1; k <= espaciosMedios; k++ )
            printf( " " );

        printf( "Z\n" );

        espaciosIniciales--;
        espaciosMedios += 2;
    }//fin del for

    return 0;
}