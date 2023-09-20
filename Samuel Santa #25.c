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
         Z
        ZZZ
       ZZZZZ
      ZZZZZZZ
       ZZZZZ
        ZZZ
         Z
- Salvedad: El programa  no admite ingreso de datos
*/
#include <stdio.h>

//se crea la función ImprimirLetra con un parámetro de tipo entero, cantidadDeLetras para imprimir las letras del diseño
void ImprimirLetras( int cantidadDeLetras )
{
    for( ; 1 <= cantidadDeLetras; cantidadDeLetras-- ){
        printf( "Z" );
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

int main()
{
    int fila=1, cantidaDeEspacios=9, cantidadDeLetras=1;//se declaran las variables fila, cantidaDeEspacios y cantidadDeLetras, fila para las  filas en los ciclos for, cantidaDeEspacios para la cantidad de espacios que se van a imprimir al inicio de cada columna y cantidadDeLetras para la cantidad de letras Z que se van a imprimir en cada fila

    //en este ciclo for se evalua si fila es menor o igual a 4 y se incrementa en 1, este para las 4 primeras filas
    for( ; fila <= 4; fila++ ){
        ImprimirEspacios( cantidaDeEspacios );
        ImprimirLetras( cantidadDeLetras );
        SaltoDeLinea();
        cantidaDeEspacios--;
        cantidadDeLetras += 2;
    }//fin del for
    
    //se le das un valor de 7 a cantidaDeEspacios y de 5 a cantidadDeLetras, esto para las 3 ultimas filas
    cantidaDeEspacios=7, cantidadDeLetras=5;

    //en este ciclo se evalua si fila es menor o igual a 7 y se incrementa en 1, fila comenzando en 5
    for( ; fila <= 7; fila++ ){
        ImprimirEspacios( cantidaDeEspacios );
        ImprimirLetras( cantidadDeLetras );
        SaltoDeLinea();
        cantidaDeEspacios++;
        cantidadDeLetras -= 2;
    }//fin del for

    return 0;
}