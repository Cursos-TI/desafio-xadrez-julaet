#include <stdio.h>
#include <stdlib.h>

// Desafio de Xadrez - MateCheck
// Declarando as variaveis para escolha de direcao do movimento e numero de casas a serem andadas
// Nesta versao, o usuario escolhera a peca, a quantidade de casas e qual peca deseja mover

int nCasas, nDirecao, n1, nMov;
int i = 1;
int j = 1;
char xDirecao;

//Definindo as procedures para movimentacao de cada peça
void moverBispo(int nDirecao, int nCasas) 
    {
    switch (nDirecao)
    {
    case 1: //Diagonal inferior esquerda
        for (n1 = 1; n1 <= nCasas; n1++)
            {printf("Diagonal inferior esquerda\n");}
        break;
    case 2: //Diagonal inferior direita
        for (n1 = 1; n1 <= nCasas; n1++)
            {printf("Diagonal inferior direita\n");}
        break;
    case 3: //Diagonal superior esquerda
        for (n1 = 1; n1 <= nCasas; n1++)
            {printf("Diagonal superior esquerda\n");}
        break;
    case 4: //Diagonal superior direita
        for (n1 = 1; n1 <= nCasas; n1++)
            {printf("Diagonal superior direita\n");}
        break;
    default:   
        {printf("Opcao invalida");}
        break;
    }  
    }

void moverTorre(int nDirecao, int nCasas) 
    {
    switch (nDirecao)
    {
    case 1: //Cima
        for (n1 = 1; n1 <= nCasas; n1++)
            {printf("Cima\n");}
        break;
    case 2: //Baixo
        for (n1 = 1; n1 <= nCasas; n1++)
            {printf("Baixo\n");}
        break;
    case 3: //Esquerda
        for (n1 = 1; n1 <= nCasas; n1++)
            {printf("Esquerda\n");}
        break;
    case 4: //Direita
        for (n1 = 1; n1 <= nCasas; n1++)
            {printf("Direita\n");}
        break;
    default:   
        {printf("Opcao invalida");}
        break;
    }  
    }

void moverRainha(char nDirecao, int nCasas) 
    {
    switch (nDirecao)
    {
    case 1: //Vertical para cima
        for (n1 = 1; n1 <= nCasas; n1++)
            {printf("Vertical para Cima\n");}
        break;
    case 2: //Vertical para baixo
        for (n1 = 1; n1 <= nCasas; n1++)
            {printf("Vertical para Baixo\n");}
        break;
    case 3: //Horizontal para a Esquerda
        for (n1 = 1; n1 <= nCasas; n1++)
            {printf("Horizontal para a Esquerda\n");}
        break;
    case 4: //Horizontal para a Direita
        for (n1 = 1; n1 <= nCasas; n1++)
            {printf("Horizontal para a Direita\n");}
        break;
    case 5: //Diagonal inferior esquerda
        for (n1 = 1; n1 <= nCasas; n1++)
            {printf("Diagonal inferior esquerda\n");}
        break;
    case 6: //Diagonal inferior direita
        for (n1 = 1; n1 <= nCasas; n1++)
            {printf("Diagonal inferior direita\n");}
        break;
    case 7: //Diagonal superior esquerda
        for (n1 = 1; n1 <= nCasas; n1++)
            {printf("Diagonal superior esquerda\n");}
        break;
    case 8: //Diagonal superior direita
        for (n1 = 1; n1 <= nCasas; n1++)
            {printf("Diagonal superior direita\n");}
        break;
    default:   
        {printf("Opcao invalida");}
        break;
    }
    }

int main() {
    int nPeca;
    
    //O usuario escolhe a peca que gostaria de mover
    printf("Vamos jogar?\n");
    printf("Escolha qual peca voce deseja mover. Digite:\n");
    printf("1 para mover o Bispo\n");
    printf("2 para mover a Torre\n");
    printf("3 para mover a Rainha\n");
    printf("4 para mover o Cavalo\n");
    scanf("%d", &nPeca);

    switch (nPeca)
    {
    case 1: //  Bispo: 
        printf("Voce escolheu o Bispo.\n");
        printf("Escolha a quantidade de casas que gostaria de mover:\n");
        scanf(" %d", &nCasas);
        printf("Vc escolheu a %d casas\n", nCasas);

        printf("Escolha uma direcao para mover o bispo.\n");
        printf("1 - Diagonal inferior esquerda.\n");
        printf("2 - Diagonal inferior direita.\n");
        printf("3 - Diagonal superior esquerda.\n");
        printf("4 - Diagonal superior direita.\n");
        scanf(" %d", &nDirecao);
        
        moverBispo(nDirecao, nCasas);
    break;
    case 2: //Torre
        printf("Voce escolheu a Torre.\n");
        printf("Escolha a quantidade de casas que gostaria de mover:\n");
        scanf("%d", &nCasas);
        printf("Vc escolheu a %d casas\n", nCasas);

        printf("Escolha uma direcao para mover a Torre.\n");
        printf("1 - Para cima.\n");
        printf("2 - Para baixo.\n");
        printf("3 - Para a esquerda.\n");
        printf("4 - Para a direita.\n");
        scanf(" %d", &nDirecao);

        moverTorre(nDirecao, nCasas);
        break;
        
    case 3: //Rainha:
        printf("Voce escolheu a Rainha.\n");
        printf("Escolha a quantidade de casas que gostaria de mover:\n");
        scanf("%d", &nCasas);
        printf("Vc escolheu a %d casas\n", nCasas);

        printf("Escolha uma direcao para mover a Rainha.\n");
        printf("1 - Vertical para cima.\n");
        printf("2 - Vertical para baixo.\n");
        printf("3 - Horizontal para a Esquerda.\n");
        printf("4 - Horizontal para a Direita.\n");
        printf("5 - Diagonal inferior esquerda.\n");
        printf("6 - Diagonal inferior direita.\n");
        printf("7 - Diagonal superior esquerda.\n");
        printf("8 - Diagonal superior direita.\n");
        scanf(" %d", &nDirecao);

        moverRainha(nDirecao, nCasas);
        break;

    case 4:
    //  Cavalo:
        printf("Voce escolheu o Cavalo.\n");
        printf("Como deseja move-lo? Digite a opcao desejada:\n");
        printf("1 - para baixo e esquerda\n");
        printf("2 - para baixo e direita\n");
        printf("3 - para cima e esquerda\n");
        printf("4 - para cima e direita\n");
        scanf(" %d", &nMov);

        switch (nMov)
        {
        case 1:
            printf("1 - para baixo e esquerda\n");

            while (j <= 1)
            {
                for (i = 1; i <= 2; i++)
                {
                    printf("Baixo\n");
                };    
                printf("Esquerda\n");
                j++;
            }
            break;
        case 2:
            printf("2 - para baixo e direita\n");
            while (j <= 1)
            {
                for (i = 1; i <= 2; i++)
                {
                    printf("Baixo\n");
                };    
                printf("Direita\n");
                j++;
            }
            break;
        case 3:
            printf("3 - para cima e esquerda\n");
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

        case 4: 
            printf("4 - para cima e direita\n");
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
        printf("Opcao invalida!!!!");
        break;
    }

    return 0;
}
