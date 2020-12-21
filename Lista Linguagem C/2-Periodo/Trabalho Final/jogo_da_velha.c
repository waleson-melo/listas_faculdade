#include<stdio.h>

// PROTOTIPOS
void pr_tabuleiro(int tabuleiro[3][3]);
void p_tabuleiro(int tabuleiro[3][3]);
void informacoes(int jog_1, int jog_2, int jogadas);
int verificacao(int tabuleiro[3][3], int jogador);
int inserir(int tabuleiro[3][3], int linha, int coluna, int jogador);
int jogar(int tabuleiro[3][3], int *partidas);


int main(){
    // op = opção de escolha. jogadas = numero de jogadas totais. partida = controla se a partida acabou ou nao. 
    int op, jogadas = 0, tabuleiro[3][3], partida = 0, jog_1 = 0, jog_2 = 0, partidas = 9;

    // Repetição do nosso jogo
    while(1){
        // Inicializando o tabuleiro
        pr_tabuleiro(tabuleiro);

        // Mostrando o tabuleiro
        p_tabuleiro(tabuleiro);

        printf("Deseja continuar? (1-Sim | 2-Nao): ");
        scanf("%d", &op);

        // Se o jogador nao quiser continuar o relatorio é exibido e o programa é inserado.
        if(op == 2){
            // Mostrar as informações ao sair.
            informacoes(jog_1, jog_2, jogadas);
            break;
        } else{
            jogadas++;  // contador do total de partidas jogadas
            // Redefinindo o valor de partida
            partida = 0;
            while(partida == 0){
                partida = jogar(tabuleiro, &partidas);  // Partida recebe o numero do jogador vitorioso ou o valor de empate.
                if(partida != 0 && partida != 3){
                    printf("Parabens jogador %d!!!\n\n", partida);
                    if(partida == 1){
                        jog_1 += 1; // Contador de vitorias do jogador 1
                    } else if(partida == 2){
                        jog_2 += 1; // Contador de vitorias do jogador 2
                    }
                } else if(partida == 3){
                    printf("Deu Velha!!!\n\n");
                }
            }
            // Redefinindo o valor de partidas
            partidas = 9;
        }
    }

    return 0;
}


// FUNÇOES

// Função para preencher o tabuleiro com zeros. Ela serve pra inicializar o tabuleiro a cada jogada.
void pr_tabuleiro(int tabuleiro[3][3]){
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            tabuleiro[i][j] = 0;
        }
    }
}

// Função para mostrar o tabuleiro.
void p_tabuleiro(int tabuleiro[3][3]){
    int i, j;

    printf("\n------JOGO DA VELHA------\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d\t", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Função para mostrar as informações do tabuleiro.
void informacoes(int jog_1, int jog_2, int jogadas){
    float p1 = 0, p2 = 0;

    printf("Jogadas: %d\n", jogadas);
    printf("Vitorias jogador 1: %d\n", jog_1);
    printf("Vitorias jogador 2: %d\n", jog_2);

    if(jogadas != 0){
        p1 = (jog_1 * 100) / jogadas;
        p2 = (jog_2 * 100) / jogadas;
    }
    
    printf("Porcentagem de vitoria do jogador 1: %.2f\n", p1);
    printf("Porcentagem de vitoria do jogador 2: %.2f\n", p2);
}

// Função para verificar se o jogador ganhou. Se o jogador ganhar a funçao retorna o seu numero, senao retorna 0.
int verificacao(int tabuleiro[3][3], int jogador){
    int i, j, cont = 0, vencedor_partida = 0;

    // Diagonal Principal
    for(i = 0; i < 3; i++){
        if(tabuleiro[i][i] == jogador){
            cont += 1;
        }
        if(cont >= 3){
            vencedor_partida = jogador;
        }
    }

    // Diagonal Secundaria
    cont = 0;   // redefinindo o valor do contador
    j = 2;
    for(i = 0; i < 3; i++){
        if(tabuleiro[i][j] == jogador){
            cont += 1;
            j -= 1;
        }
        if(cont >= 3){
            vencedor_partida = jogador;
        }
    }
    
    // Vertical
    for(j = 0; j < 3; j++){
        cont = 0;
        for(i = 0; i < 3; i++){
            if(tabuleiro[i][j] == jogador){
                cont += 1;
            }
        }
        if(cont >= 3){
            vencedor_partida = jogador;
        }
    }

    // Horizontal
    for(i = 0; i < 3; i++){
        cont = 0;
        for(j = 0; j < 3; j++){
            if(tabuleiro[i][j] == jogador){
                cont += 1;
            }
        }
        if(cont >= 3){
            vencedor_partida = jogador;
        }
    }

    return vencedor_partida;
}

// Função para inserir na tabela, ela retorna um valor: 0 = inserio com sucesso, 1 = falha ao inserir.
int inserir(int tabuleiro[3][3], int linha, int coluna, int jogador){
    int x = 1;
    // Verificando se a posição escolhida esta vazia.
    if(tabuleiro[linha-1][coluna-1] != 0){
        printf("Este espaco ja esta preenchido.\n");
    } else{
        if((linha > 3 || linha < 1) || (coluna > 3 || coluna < 1)){
            printf("Posicao invalida.\n");
        } else{
            tabuleiro[linha-1][coluna-1] = jogador;
            x = 0;
        }
    }

    return x;
}

// Função para pegar fazer as jogadas. Se alguem ganhar o valor de retorno é o numero do jogador.
// Se as jogadas acabarem e ninguem ganhar a função retorna 3.
int jogar(int tabuleiro[3][3], int *partidas){
    int l, c, j = 1, vencedor_partida = 0;
    
    // Verificando se o jogo deu velha.
    if(*partidas <= 0){
        vencedor_partida = 3;
    } else{
        // Faz a repetição ate que o local de inserção seja valido.
        while(j != 0){
            printf("----Jogador 1-----\n");
            printf("Linha: ");
            scanf("%d", &l);
            printf("Coluna: ");
            scanf("%d", &c);

            j = inserir(tabuleiro, l, c, 1);
            // Se for inserido no local nós subtraimos 1 das partidas jogadas.
            if(j == 0){
                *partidas -= 1;
            }
        }

        p_tabuleiro(tabuleiro);
        // Verificando se a jogada foi vitoriosa.
        vencedor_partida = verificacao(tabuleiro, 1);
        j = 1;
        
        // Verificando se o jogo deu velha.
        if(*partidas <= 0){
            vencedor_partida = 3;
        } else{
            if(vencedor_partida == 0){
                // Faz a repetição ate que o local de inserção seja valido.
                while(j != 0){
                    printf("----Jogador 2----\n");
                    printf("Linha: ");
                    scanf("%d", &l);
                    printf("Coluna: ");
                    scanf("%d", &c);

                    j = inserir(tabuleiro, l, c, 2);
                    if(j == 0){
                        *partidas -= 1;
                    }
                }

                p_tabuleiro(tabuleiro);
                // Verificando se a jogada foi vitoriosa.
                vencedor_partida = verificacao(tabuleiro, 2);
            }
        }
    }

    return vencedor_partida;
}

