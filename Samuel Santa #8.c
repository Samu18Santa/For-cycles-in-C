/*- Fecha de publicación: 2023-09-24
- Hora: 10:00 a.m
- Versión de su código: 1.0
- Autor. Ing(c) Samuel Santa Martínez
- Nombre del lenguaje utilizado: C
- Versión del lenguaje utilizado: C18
- Presentado a: Doctor Ricardo Moreno Laverde
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Asignatura IS284 Programación II
- El siguiente programa presenta la serie de Catalan sin sobrepasar el número de terminos que ingrese el usuario
- Salvedad: El programa admite números naturales, para valores fuera de este rango no garantizamos su resultado
*/
#include <stdio.h>

//se crea la función Factorial con un parámetro de tipo lon long int, numero
long long int Factorial( long long int numero )
{    
    long long int resultado = 1;

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

int main(){

    int cantidadDeTerminos=0;//se declara la variable cantidadDeTerminos de tipo entero con un valor conocido
    
    printf( "El siguiente programa presenta la serie de Catalán: C(n) = (2n)! / (n!(n+1)!),\ndonde C(0) = 1." );
    printf( "\nIngrese el número de términos que desea: " );
    scanf( "%i", &cantidadDeTerminos );//se le asigna a la variable cantidadDeTerminos el valor ingresado por el usuario
    
    printf( "Los primeros %i términos de la serie Catalán son: ", cantidadDeTerminos );
    
    //se declara la variable i para el ciclo for, se inicializa en 0, se evalua si i es menor que cantidadDeTerminos y se incrementa en 1
    for( int i=0; i < cantidadDeTerminos; i++ ){
        long long int termino = ( Factorial( ( i * 2 ) ) / ( ( Factorial( i ) * Factorial( ( i + 1 ) ) ) ) );
        //se declara la variable termino de tipo long long int, se le asigna el valor del termino i-esimo de la serie de Catalan para ser impreso

        printf( "%lld, ", termino );//se imprime el valor de la variable termino.
    }//fin del for

    return 0;
}