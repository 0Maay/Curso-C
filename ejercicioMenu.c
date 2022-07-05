/*
Titulo: Ejercicio Menu
Autor: Wendy Mayli Martinez Reyes
Fecha: 01 de julio del 2022
Descripción:
Este programa muestra un menu al usuario, con las siguientes opciones:
1- Triangulo
2- Cuadrado
3- Linea
4- Salir
Cada opcion dibuja la forma elegida, utilizando condicionales y ciclos
*/
#include<stdio.h>

int main(){
    int opcion = 0, i = 0, j = 0, ladoCuadrado = 4, alturaTriangulo = 8, largoLinea = 20;
    /* 
    OPCIONES
    1 Triangulo
    2 Cuadrado
    3 Linea
    4 Salir
    */
    while(opcion != 4){ 
        printf("Selecciona una opci%cn:\n1. Tri%cngulo\n2. Cuadrado\n3. L%cnea\n4. Salir\n", 162, 160, 161);
        scanf("%d", &opcion);
        if(opcion == 1){
            printf("Opci%cn Tri%cngulo\n", 162, 160);
            for(i = 0; i < alturaTriangulo; i++){
                for(j = 0; j < alturaTriangulo*2; j++){
                    if(j < alturaTriangulo-i-1 || j > alturaTriangulo+i-1)
                        printf(" ");
                    else
                            printf("*");
                }
                printf("\n");
            }
        }
        if(opcion == 2){
            printf("Opci%cn Cuadrado\n", 162);
            for(i = 0; i < ladoCuadrado; i++){
                for(j = 0; j < ladoCuadrado; j++){
                    if(i == 0 || i == (ladoCuadrado - 1) ){
                        printf("* ");
                    }else{
                        if(j == 0 || j == (ladoCuadrado - 1) ){
                            printf("* ");
                        }else{
                            printf("  ");
                        }
                    }
                }
                printf("\n");
            }
        }
        if(opcion == 3){
            printf("Opci%cn L%cnea\n", 162, 161);
            for(i = 0; i< largoLinea; i++)
                printf("*");
            printf("\n");
        }
        printf("\n");
    }
    printf("Opci%cn Salir\n", 162);
    return 0;
}