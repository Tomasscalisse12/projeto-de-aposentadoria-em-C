#include <stdio.h>

int main() {
    int idade, tempo_servico;

    printf("Digite a idade do trabalhador (mínimo 18 anos): ");
    scanf("%d", &idade);

    if (idade < 18) {
        printf("A idade mínima para trabalhar é de 18 anos.\n");
        return 1;
    }

    printf("Digite o tempo de serviço do trabalhador (em anos): ");
    scanf("%d", &tempo_servico);

    if (idade >= 65 || tempo_servico >= 30 || (idade >= 60 && tempo_servico >= 25)) {
        printf("O trabalhador pode se aposentar.\n");
    } else {
        printf("O trabalhador ainda não pode se aposentar.\n");
    }

    return 0;
}