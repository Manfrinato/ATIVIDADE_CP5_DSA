#include <stdio.h>
#include <stdlib.h>
typedef struct No No;
struct No
{
    int valor;
    No *proximo;
};

No *inicio = NULL;

void inserirInicio(No **inicio, int valor)
{
    // 1. Alocar um novo nó
    No *novo = malloc(sizeof(No));

    // 2. Verificar se malloc retornou NULL
    if (novo == NULL)
    {
        printf("Erro, memoria insuficiente!\n");
        exit(1);
    }

    // 3. Guardar o valor
    novo->valor = valor;

    // 4. Fazer novo->proximo apontar para o início atual
    novo->proximo = *inicio;

    // 5. Retornar o novo início
    *inicio = novo;
}

void imprimirLista(No *inicio)
{
    // IMPLEMENTAR
}
int buscar(No *inicio, int valor)
{
    // IMPLEMENTAR
}
int main(void)
{
    No *inicio = NULL;
    int opcao, valor;
    do
    {
        printf("\n===== LISTA ENCADEADA =====\n");
        printf("1 - Inserir no inicio\n");
        printf("2 - Mostrar lista\n");
        printf("3 - Buscar valor\n");
        printf("4 - Mostrar primeiro elemento\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("Valor: ");
            scanf("%d", &valor);
            inicio = inserirInicio(inicio, valor);
            break;
        case 2:
            imprimirLista(inicio);
            break;
        case 3:
            printf("Valor para buscar: ");
            scanf("%d", &valor);
            // chamar buscar() e mostrar o resultado
            break;
        case 4:
            // verificar se a lista está vazia e mostrar inicio->valor
            break;
        case 0:
            break;
        }
        

    } while (opcao != 0);
    return 0;
}
