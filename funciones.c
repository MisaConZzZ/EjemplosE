#include "funciones.h"
#include <stdio.h>
#include <string.h>

void listarProductos(char productos[][3][40], double precio[], int indice[]) {
    printf("  Número \t Nombre \t Categoria\t Marca \t Precio\t\n");
    for(int i = 0; i < 10; i++){
        printf(" %d \t %s \t %s\t %s \t %lf\t\n", indice[i], productos[i][0], productos[i][1], productos[i][2], precio[i]);
    }
}

void buscarXMarca(char productos[][3][40], double precio[]) {
    char marca[40];
    int noexiste = 0;
    printf("Escriba la marca que quiere buscar: ");
    scanf("%39s", marca);

    for(int i = 0; i < 10; i++) {
        if(strcmp(productos[i][2], marca)==0){
            printf("%s \t %s \t %s\t %lf \n", productos[i][0], productos[i][1], productos[i][2], precio[i]);
            noexiste = 1;
        }
    }
    if(noexiste == 0){
        printf("No existe\n");
    }
}

void buscarXCategoria(char productos[][3][40], double precio[]) {
    char categoria[40];
    int noexiste = 0;
    printf("Escriba la categoria que quiere buscar: ");    
    scanf("%39s", categoria); 
    for(int i = 0; i < 10; i++) {
        if(strcmp(productos[i][1], categoria)==0){
            printf("%s \t %s \t %s\t %lf \n", productos[i][0], productos[i][1], productos[i][2], precio[i]);
            noexiste = 1;
        }
    }
    if(noexiste == 0){
        printf("No existe\n");
    } 
}

void buscarXPrecioMenor(char productos[][3][40], double precio[]) {
    double precioMax;
    int noexiste = 0;
    printf("Escribir el Precio máximo: ");
    scanf("%lf", &precioMax);

    for(int i = 0; i < 10; i ++){
        if(precio[i] < precioMax){
        printf("%s \t %s \t %s\t %lf \n", productos[i][0], productos[i][1], productos[i][2], precio[i]);
            noexiste = 1;
        }
    }
    if(noexiste == 0){
        printf("No existe\n");
    }
}

void editarProducto(char productos[][3][40], double precio[], int indice[]) {
    int numero;
    double precioNuevo;
    int i;
    printf("Ingrese el numero: ");
    scanf("%d", &numero);

    for(int i = 0; i < 10; i++){
        if(indice[i] == numero){
            printf("Ingrese el nombre a cambiar: ");
            scanf("%39s", productos[i][0]);
            printf("Ingrese la categoría a cambiar: ");
            scanf("%39s", productos[i][1]);
            printf("Ingrese la marca a cambiar: ");
            scanf("%39s", productos[i][2]);
            printf("Ingrese el precio a cambiar: ");
            scanf("%lf", &precioNuevo);
            precio[i] = precioNuevo;
            break;
        }
    }

    if(i == 10){
        printf("No existe\n");
    }
}