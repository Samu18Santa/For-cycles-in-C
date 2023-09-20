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
                           A     A
                           AA   AA
                           AAA AAA
                           AAAAAAA
                           AAA AAA
                           AA   AA
                           A     A

- Salvedad: El programa  no admite ingreso de datos
*/
#include <stdio.h>

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
    int fila=1, espaciosMedios=5;//se declaran las variables fila y espaciosMedios para el ciclo for, se inicializan en 1 y 5 respectivamente, se evalua si fila es menor o igual a 7 y se incrementa en 1, esta para cada fila del diseño
    //para las 3 primeras filas
    for( ; fila <= 3; fila++, espaciosMedios-=2 ){
        ImprimirEspacios( 27 );
        ImprimirLetras( fila );
        ImprimirEspacios( espaciosMedios );
        ImprimirLetras( fila );
        SaltoDeLinea();
    }//fin del for

    //cuando fila = 4
    ImprimirEspacios( 27 );
    ImprimirLetras( 7 );
    SaltoDeLinea();
    fila++;

    espaciosMedios = 1;//se le da a la variable espaciosMedios un 1 para iniciar desde la fila 5
    int cantidadA=3;//se declara la variable cantidadA para el ciclo for, se inicializa en 3, se evalua si fila es menor o igual a 6 y se incrementa en 1, esta para cada fila del diseño
    //para las 3 ultimas filas
    for( ; fila <= 7; fila++, cantidadA--, espaciosMedios+=2 ){
        ImprimirEspacios( 27 );
        ImprimirLetras( cantidadA );
        ImprimirEspacios( espaciosMedios );
        ImprimirLetras( cantidadA );
        SaltoDeLinea();
    }//fin del for

    return 0;
}