#include<stdio.h>
#include<stdlib.h>

void init_table(int table[3][3]);
void view_table(int table[3][3]);
int play(int player, int table[3][3]);
void report(int mp);

int main()
{
    int x = 1, win = 0, matches_played = 0, table[3][3];

    while(x != 0){
        matches_played += 1;

        init_table(table);

        win = 1;
        
        // Jogadas
        while(1){
            // Se estiver usando windows troque para 'system("cls")'
            system("clear");

            view_table(table);

            play(1, table);
        }


        if(win == 1){
            win = 0;

            printf("\nVoce deseja continuar? (1-Sim, 0-Nao)\n");
            scanf("%d", &x);

            // Se estiver usando windows troque para 'system("cls")'
            system("clear");

            if(x == 0){
                report(matches_played);
            }
        }
    }

    return 0;
}

void init_table(int table[3][3])
{
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            table[i][j] = 0;
        }
    }
}

void view_table(int table[3][3])
{
    int i, j;

    printf("1\t2\t3\n_________________\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d\t", table[i][j]);
        }
        printf("| %d\n", i + 1);
    }
}

int play(int player, int table[3][3])
{
    int x = 1, lin, col;

    while(x != 0){
        printf("====Jogador %d====\n", player);
        printf("Linha: ");
        scanf("%d", &lin);
        printf("Coluna: ");
        scanf("%d", &col);

        if((lin > 3) || (lin < 0) || (col > 3) || (col < 0)){
            printf("Coordenada invalida\n");
        } else{
            table[lin-1][col-1] = player;
            x = 0;
        }
    }
}

void report(int mp)
{
    // Se estiver usando windows troque para 'system("cls")'
    system("clear");
    printf("==================Relatorio=====================\n");
    printf("Quantidade de partidas jogadas: %d\n", mp);
    printf("Quantas partidas o jogador 1 venceu: teste\n");
    printf("Quantas partidas o jogador 2 venceu: teste\n");
}