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

int main()
{
    int cantidadDeLetras = 13, cantidadDeEspacios = 0;//se declaran las variables necesarias para el programa, cantidadDeLetras para la cantidad de letras P que se van a imprimir y cantidadDeEspacios para la cantidad de espacios que se van a imprimir al inicio de cada linea

    //se crea el ciclo for para imprimir el diseño, se declaran las variables i, j y k, i para el numero de lineas, j para la cantidad de espacios al inicio de cada linea y k para la cantidad de letras P que se van a imprimir
    for( int i = 1; i <= 7; i++ )
    {
        for( int j = 1; j <= cantidadDeEspacios; j++ )
        {
            printf( " " );
        }

        for( int k = 1; k <= cantidadDeLetras; k++ )
        {
            printf( "P" );
        }

        printf( "\n" );
        cantidadDeEspacios++;
        cantidadDeLetras -= 2;
    }//fin del for

    return 0;
}