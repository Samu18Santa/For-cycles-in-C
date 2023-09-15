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
- El siguiente programa genera la suma de la serie de Taylor para cosh(x)
 Salvedad: El programa admite números enteros, para valores fuera de este rango no garantizamos su resultado
*/
//Ejercicio 32

#include <stdio.h>
#include <math.h>

//se crea la función Factorial con un parámetro de tipo entero, numero
int Factorial( int numero )
{    
    int resultado = 1;

    if( numero == 0 ){
        return 1;
    }//de lo dontrario
    else{
        for (int n = 1; n <= numero; n++) {
            resultado *= n;
        }//fin del for
        return resultado;
    }//fin del if
}//fin de la función Factorial

int main()
{
    float x = 0;//se crea la variable x de tipo flotante con un valor conocido
    int n = 0;//se crea la variable n de tipo entero con un valor conocido

    printf( "Este programa genera la suma de la serie de Taylor para cosh(x)" );
    printf( "\nIngrese el valor de x: " );
    scanf( "%f", &x );//se le asigna a la variable x el valor ingresado por el usuario
    
    printf( "Ingrese el número de términos: " );
    scanf( "%i", &n );//se le asigna a la variable n el valor ingresado por el usuario

    float resultado = x;

    for( int i=1; i <= n; i++ ){
        resultado += ( pow( x, ( 2 * i ) ) ) / Factorial( 2 * i );
    }
    
    printf( "El coseno hiperbolico de %g es igual a: %f", x, resultado );//se llama a la función SerieCosenoHiperbolico con los valores de n y x como parámetros
    
    return 0;
}