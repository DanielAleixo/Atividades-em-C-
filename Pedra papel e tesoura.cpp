#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gerarJogadaComputador() {
    // Semente para a geração de números aleatórios
    srand(time(NULL));
    
    // Gere um número aleatório entre 0 e 2
    return rand() % 3;
}

int main() {
    char *jogadas[] = {"Pedra", "Papel", "Tesoura"};
    int escolhaUsuario, escolhaComputador;

    printf("Jogo Pedra-Papel-Tesoura\n");
    printf("Escolha uma jogada:\n");
    printf("0 - Pedra\n1 - Papel\n2 - Tesoura\n");
    scanf("%d", &escolhaUsuario);

    if (escolhaUsuario < 0 || escolhaUsuario > 2) {
        printf("Escolha inválida. Encerrando o jogo.\n");
        return 1;
    }

    escolhaComputador = gerarJogadaComputador();

    printf("Você escolheu: %s\n", jogadas[escolhaUsuario]);
    printf("O computador escolheu: %s\n", jogadas[escolhaComputador]);

    if (escolhaUsuario == escolhaComputador) {
        printf("Empate!\n");
    } else if ((escolhaUsuario == 0 && escolhaComputador == 2) || 
               (escolhaUsuario == 1 && escolhaComputador == 0) || 
               (escolhaUsuario == 2 && escolhaComputador == 1)) {
        printf("Você venceu!\n");
    } else {
        printf("O computador venceu!\n");
    }

    return 0;
}
