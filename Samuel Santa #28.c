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
//se crea la función ImprimirLetra con un parámetro de tipo entero, cantidadDeLetras para imprimir las letras del diseño
void ImprimirLetras( int cantidadDeLetras )
{
    for( ; 1 <= cantidadDeLetras; cantidadDeLetras-- ){
        printf( "A" );
    }
}
//se crea la función ImprimirLetras con un parámetro de tipo entero, cantidadDeEspacios para imprimir los espacios de cada columna
void ImprimirEspacios( int cantidadDeEspacios )
{
    for( ; 1 <= cantidadDeEspacios; cantidadDeEspacios-- ){
        printf( " " );
    }
}//fin de la función ImprimirEspacios

//se crea la funcion salto de linea debido a la restriccion de solo 4 usos de la funcion printf
void SaltoDeLinea()
{
    printf( "\n" );
}//fin de la función SaltoDeLinea

int  main()
{
    int fila = 1;//se declara la variable fila de tipo entero para las filas en los ciclos for y se inicializa en 1

    //se declara el ciclo for para imprimir las primeras 6 filas, se inicia con la variable fila en 1, se evalua si fila es menor o igual a 6 y se incrementa en 1, esta para cada fila del diseño, ademas se declara la variable cantidaDeEspacios para la cantidad de espacios que se van a imprimir al inicio de cada fila
    for( int cantidaDeEspacios=39; fila <= 6; fila++ )
    {
        ImprimirEspacios( cantidaDeEspacios );
        ImprimirLetras( fila );
        SaltoDeLinea();
        cantidaDeEspacios--;
    }//fin del for

    //se declara el ciclo for para imprimir las ultimas 5 filas, se inicia con la variable fila en 6, se evalua si fila es menor o igual a 1 y se incrementa en 1, esta para cada fila del diseño, ademas se declaran las variables cantidaDeEspacios y cantidaDeLetras para la cantidad de cantidaDeEspacios que se van a imprimir al inicio de cada fila y la cantidad de letras A que se van a imprimir en cada fila respectivamente
    for ( int cantidaDeEspacios = 35, cantidaDeLetras = 5; fila <= 11; fila++ )
    {
        ImprimirEspacios( cantidaDeEspacios );
        ImprimirLetras( cantidaDeLetras );
        SaltoDeLinea();
        cantidaDeEspacios++;
        cantidaDeLetras--;
    }//fin del for

    return 0;
}
