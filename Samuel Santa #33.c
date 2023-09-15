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
- El siguiente programa genera la suma de la serie de Taylor para In(x)
 Salvedad: El programa admite números enteros, para valores fuera de este rango no garantizamos su resultado
*/
//Ejercicio 33

#include <stdio.h>
#include <math.h>

int main()
{
    float x = 0;//se crea la variable x de tipo flotante con un valor conocido
    int n = 0;//se crea la variable n de tipo entero con un valor conocido

    printf( "Este programa genera la suma de la serie de Taylor para Ln(x)" );
    printf( "\nIngrese el valor de x: " );
    scanf( "%f", &x );//se le asigna a la variable x el valor ingresado por el usuario
    
    printf( "Ingrese el número de términos: " );
    scanf( "%i", &n );//se le asigna a la variable n el valor ingresado por el usuario

    float resultado = x-1;//se declara la variable resultado de tipo flotante con un valor de x-1, siendo este el primer termino de la serie de Taylor

    for( int i=2; i <= n; i++ ){
        resultado += ( pow( -1, ( i + 1 ) ) * ( ( pow( ( x - 1 ), i ) ) / i ) );
    }
    
    printf( "El coseno hiperbolico de %g es igual a: %f", x, resultado );
    
    return 0;
}