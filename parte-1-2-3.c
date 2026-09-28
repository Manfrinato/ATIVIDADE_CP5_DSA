//PARTE 1

int somatorio(int n)
{
    //CASO BASE
    if (n <= 1)
    {
        return (n < 1) ? 0 : 1;
    }
    //CHAMADA RECURSIVA
    return n + somatorio(n - 1);
}

int main(void)
{
    int n;
    printf("Digite n: ");
    scanf("%d", &n);
    printf("Somatorio = %d\n", somatorio(n));
    return 0;
}

//PARTE 2


//FUNÇÃO RECURSIVA PARA SOMA ELEMENTOS
int somaVetor(int vetor[], int n)
{
    //CASO BASE
    if (n <= 0)
    {
        return 0;
    }
    //CHAMADA RECURSIVA
    return vetor[n - 1] + somaVetor(vetor, n - 1);
}

//FUNÇÃO RECURSIVA PARA ENCONTRAR MAIOR ELEMENTO
int maiorVetor(int vetor[], int n)
{
    //CASO BASE
    if (n == 1)
    {
        return vetor[0];
    }
    //CHAMADA RECURSIVA
    int maiorRestante = maiorVetor(vetor, n - 1);
    if (vetor[n - 1] > maiorRestante)
    {
        return vetor[n - 1];
    }
    return maiorRestante;
}

int main(void)
{
    int vetor[] = {10, 20, 30, 40, 50};
    int n = 5;

    printf("Soma do vetor: %d\n", somaVetor(vetor, n));
    printf("Maior elemento: %d\n", maiorVetor(vetor, n));

    return 0;
}

//PARTE 3

typedef struct No No;

struct No
{
    int valor;
    No *proximo;
};
