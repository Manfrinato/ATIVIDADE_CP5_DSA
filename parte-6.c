#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    struct No *proximo;
    int valor;
} No;

int buscar(No *inicio, int valor) {
    No *atual = inicio;
    while (atual != NULL) {
        if(valor == atual -> valor){
            return 1;
        }else{
            atual = atual -> proximo;
        }
    }
    return 0;
}

int main() {
    No *n1 = (No*) malloc(sizeof(No));
    No *n2 = (No*) malloc(sizeof(No));
    No *n3 = (No*) malloc(sizeof(No));
    No *n4 = (No*) malloc(sizeof(No));
    No *n5 = (No*) malloc(sizeof(No));

    n1->valor = 7;
    n2->valor = 4;
    n3->valor = 5;
    n4->valor = 8;
    n5->valor = 9;

    n1->proximo = n2;
    n2->proximo = n3;
    n3->proximo = n4;
    n4->proximo = n5;
    n5->proximo = NULL;

    int resultado = buscar(n1, 1);
    printf("%d\n", resultado);
    return 0;
}
