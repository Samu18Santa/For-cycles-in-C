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
                                       A
                                      AA
                                     AAA
                                    AAAA
                                   AAAAA
                                  AAAAAA
                                   AAAAA
                                    AAAA
                                     AAA
                                      AA
                                       A
- Salvedad: El programa  no admite ingreso de datos
*/
#include <stdio.h>

//se crea la función ImprimirA con dos parámetros de tipo entero, inicio y final
int ImprimirA( int inicioA, int finalA )
{
    for( ; inicioA <= finalA; inicioA++ ){
        printf( "A" );
    }
}

//se crea la función ImprimirLetras con dos parámetros de tipo entero, inicio y final para imprimir los espacios de cada columna
int ImprimirEspacios( int inicioEspacios, int finalEspacios )
{
    for( ; inicioEspacios <= finalEspacios; inicioEspacios++ ){
        printf( " " );
  }
}//fin de la función ImprimirEspacios

//se crea la funcion salto de linea debido a la restriccion de solo 4 usos de la funcion printf
int SaltoDeLinea()
{
    printf( "\n" );
}//fin de la función SaltoDeLinea

int main()
{
    int fila=1;

    //primeras 6 filas
    for( int espacios=39; fila <= 6; fila++, espacios-- ){
        ImprimirEspacios( 1, espacios );
        ImprimirA(1, fila);
        SaltoDeLinea();
    }

    //ultimas 5 filas
    for ( int espacios=35, cantidadA=5; fila <= 11; fila++, espacios++, cantidadA-- ){
        ImprimirEspacios( 1, espacios );
        ImprimirA(1, cantidadA);
        SaltoDeLinea();
    }
    
}
