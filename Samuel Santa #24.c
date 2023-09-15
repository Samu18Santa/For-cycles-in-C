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

//se crea la función ImprimirA con dos parámetros de tipo entero, inicio y final
void ImprimirA( int inicioA, int finalA )
{
    for( ; inicioA <= finalA; inicioA++ ){
        printf( "A" );
    }
}

//se crea la función ImprimirLetras con dos parámetros de tipo entero, inicio y final para imprimir los espacios de cada columna
void ImprimirEspacios( int inicioEspacios, int finalEspacios )
{
    for( ; inicioEspacios <= finalEspacios; inicioEspacios++ ){
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
        ImprimirEspacios( 1, 27 );
        ImprimirA( 1, fila );
        ImprimirEspacios( 1, espaciosMedios );
        ImprimirA( 1, fila );
        SaltoDeLinea();
    }//fin del for

    //cuando fila = 4
    ImprimirEspacios( 1, 27 );
    ImprimirA( 1, 7 );
    SaltoDeLinea();
    fila++;

    espaciosMedios = 1;//se le da a la variable espaciosMedios un 1 para iniciar desde la fila 5
    int cantidadA=3;//se declara la variable cantidadA para el ciclo for, se inicializa en 3, se evalua si fila es menor o igual a 6 y se incrementa en 1, esta para cada fila del diseño
    //para las 3 ultimas filas
    for( ; fila <= 7; fila++, cantidadA--, espaciosMedios+=2 ){
        ImprimirEspacios( 1, 27 );
        ImprimirA( 1, cantidadA );
        ImprimirEspacios( 1, espaciosMedios );
        ImprimirA( 1, cantidadA );
        SaltoDeLinea();
    }//fin del for

    return 0;
}