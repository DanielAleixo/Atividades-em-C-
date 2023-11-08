#include <stdio.h>

int main() {
    int numAlunos;
    
    printf("Quantos alunos deseja calcular a média? ");
    scanf("%d", &numAlunos);

    for (int i = 0; i < numAlunos; i++) {
        char nome[50];
        double nota1, nota2, nota3, nota4;
        double media;
        
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", nome);
        
        printf("Digite as 4 notas do aluno (separadas por espaço): ");
        scanf("%lf %lf %lf %lf", &nota1, &nota2, &nota3, &nota4);
        
        media = (nota1 + nota2 + nota3 + nota4) / 4.0;
        
        printf("A média anual do aluno %s é: %.2lf\n", nome, media);
    }

    return 0;
}
