#include <stdio.h>

void imprimirNombreCompleto() {
    printf("Establecido\n");
}

void imprimirR() {
    printf("R\n");
    imprimirNombreCompleto();
}

void imprimirA() {
    printf("A ");
    imprimirR();
}

void imprimirG() {
    printf("G ");
    imprimirA();
}

void imprimirD() {
    printf("D ");
    imprimirG();
}

void imprimirE() {
    printf("E ");
    imprimirD();
}

void inicio() {
    printf("Inicio\n");
    imprimirE();
}

int main() {
    inicio();
    return 0;
}
