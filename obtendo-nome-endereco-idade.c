#include <stdio.h>

int main(int argc, char** argv) {
    char nome[30];
    char endereco[30];
    int idade;

    printf("Nome: \n");
    scanf("%s", nome);

    printf("Endereco: \n");
    scanf("%s", endereco);

    printf("Idade: \n");
    scanf("%d", &idade);

    printf("\nNome: %s", nome);
    printf("\nEndereco: %s", endereco);
    printf("\nIdade: %d", idade);

    return 0;
}
