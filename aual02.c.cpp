#define _CRT_SECURE_NO_WARNINGS // Para desabilitar os avisos de scanf_s no Visual Studio

#include <stdio.h>

int main() {
    char nome[50];

    printf("Qual e sua linguagem de programacao favorita? ");

    // Utilizando scanf_s
    scanf_s("%49s", nome, sizeof(nome));

    printf("Otima escolha para o mercado de trabalho! %s\n", nome);

    return 0;
}


	



