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
                                  PPPPPPPPPPPPP
                                   PPPPPPPPPPP
                                    PPPPPPPPP
                                     PPPPPPP
                                      PPPPP
                                       PPP
                                        P
- Salvedad: El programa  no admite ingreso de datos
*/
#include <stdio.h>

//se crea la función ImprimirLetras con un parámetro de tipo entero, cantidadDeLetras para imprimir las letras del diseño
void ImprimirLetras( int cantidadDeLetras )
{
    for( ; 1 <= cantidadDeLetras; cantidadDeLetras-- ){
        printf( "P" );
    }
}
//se crea la función ImprimirEspacios con un parámetro de tipo entero, cantidadDeEspacios para imprimir los espacios de cada columna
void ImprimirEspacios( int cantidadDeEspacios )
{
    for( ; 1 <= cantidadDeEspacios; cantidadDeEspacios-- ){
        printf( " " );
    }
}//fin de la función ImprimirEspacios

int main()
{
    int cantidadDeLetras = 13, cantidadDeEspacios = 33;//se declaran las variables necesarias para el programa, cantidadDeLetras para la cantidad de letras P que se van a imprimir y cantidadDeEspacios para la cantidad de espacios que se van a imprimir al inicio de cada linea

    //se declara la variable fila para el ciclo for, se inicializa en 1, se evalua si fila es menor o igual a 7 y se incrementa en 1, esta para cada fila del diseño
     for( int fila = 1; fila <= 7; fila++ )
     {
        ImprimirEspacios( cantidadDeEspacios );
        ImprimirLetras( cantidadDeLetras );
        printf( "\n" );
        cantidadDeEspacios++;
        cantidadDeLetras -= 2;
    }//fin del for

    return 0;
}