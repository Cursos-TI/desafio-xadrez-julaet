#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int i = 1;
    int nPeca, nMov;
    int j = 1; 
    
    printf("Vamos jogar?\n");
    printf("Escolha qual peca voce deseja mover. Digite:\n");
    printf("1 para mover o Bispo\n");
    printf("2 para mover a Torre\n");
    printf("3 para mover a Rainha\n");
    printf("4 para mover o Cavalo\n");
    scanf("%d", &nPeca);

    switch (nPeca)
    {
    case 1:
    //  Bispo: 5 casas na diagonal superior direita
        printf("Voce escolheu o Bispo.\n");
        printf("Ele se movera da seguinte forma:\n");
        for (i = 1; i < 6; i++)
        {
            printf("Direita\n");
            printf("Cima\n");
        }
        break;
    case 2:    
    //  Torre: 5 casas para a direita
        printf("Voce escolheu a Torre.\n");
        printf("Ela se movera da seguinte forma:\n");
        do
        {
            printf("Direita\n");
            i++;
        } while (i < 6);
        break;
    case 3:
    //  Rainha: 8 casas para a esquerda
        printf("Voce escolheu a Rainha.\n");
        printf("Ela se movera da seguinte forma:\n");
        while (i < 9)
        {
            printf("Esquerda\n");
            i++;
        }
        break;
    case 4:
    //  Cavalo:
        printf("Voce escolheu o Cavalo.\n");
        printf("Como deseja move-lo? Digite a opcao desejada:\n");
        printf("1 - para esquerda\n");
        printf("2 - para direita\n");
        scanf("%d", &nMov);

        switch (nMov)
        {
        case 1:
            printf("O cavalo se movera para a esquerda\n\n");

            while (j <= 1)
            {
                for (i = 1; i <= 2; i++)
                {
                    printf("Cima\n");
                };    
                printf("Esquerda\n");
                j++;
            }
            break;
        case 2:
            printf("O cavalo se movera para a direita\n\n");
            while (j <= 1)
            {
                for (i = 1; i <= 2; i++)
                {
                    printf("Cima\n");
                };    
                printf("Direita\n");
                j++;
            }
            break;
        default:
            printf("Opcao invalida!");
            break;
        }
        break;
    default:
        printf("Opcao invalida!");
        break;
    }

    return 0;
}
