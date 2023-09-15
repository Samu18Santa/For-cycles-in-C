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
                                                                         AAAAAAA
                                                                        AAAAAAAA
                                                                       AAAAAAAAA
                                                                      AAAAAAAAAA
                                                                     AAAAAAAAAAA
                                                                    AAAAAAAAAAAA
                                                                   AAAAAAAAAAAAA
                                                                  AAAAAAAAAAAAAA
                                                                 AAAAAAAAAAAAAAA
                                                                AAAAAAAAAAAAAAAA
                                                               AAAAAAAAAAAAAAAAA
                                                              AAAAAAAAAAAAAAAAAA
                                                             AAAAAAAAAAAAAAAAAAA
                                                            AAAAAAAAAAAAAAAAAAAA
                                                           AAAAAAAAAAAAAAAAAAAAA
                                                          AAAAAAAAAAAAAAAAAAAAAA
                                                         AAAAAAAAAAAAAAAAAAAAAAA
                                                        AAAAAAAAAAAAAAAAAAAAAAAA
                                                       AAAAAAAAAAAAAAAAAAAAAAAAA
- Salvedad: El programa  no admite ingreso de datos
*/
#include <stdio.h>

//se crea la función ImprimirA con dos parámetros de tipo entero, inicioA y finalA, para imprimir las letras A
int ImprimirA( int inicioA, int finalA )
{
    for( ; inicioA <= finalA; inicioA++ ){
        printf( "A" );
    }
}

//se crea la función ImprimirEspacios con dos parámetros de tipo entero, inicioEspacios y finalEspacios, para imprimir los espacios al inicio de cada columna
int ImprimirEspacios( int inicioEspacios, int finalEspacios )
{
    for( ; inicioEspacios <= finalEspacios; inicioEspacios++ ){
        printf( " " );
  }
}//fin de la función ImprimirEspacios

int main()
{
    //se declara la variable fila para el ciclo for, se inicializa en 1, se evalua si fila es menor o igual a 25 y se incrementa en 1, esta para cada fila del diseño
    for( int fila=1; fila <= 25; fila++) {
        ImprimirEspacios( 1, ( 80 - fila ) );
        ImprimirA( 1, fila );
        printf( "\n" );
    }//fin del for

    return 0;
}