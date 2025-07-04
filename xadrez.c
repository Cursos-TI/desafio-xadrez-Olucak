#include <stdio.h>

int main() {
     printf("### Movimentação de peças de xadrez ###\n");
     printf("\n");
    int movimento_torre = 0; //definindo o valor e tipo da torre
    int movimento_bispo = 0; //definido o valor e tipo do bispo

    // Movimento da Torre 
    printf("Movimento da peça Torre:\n"); // exibi a mensagem da peça que vai de movimentar 
    while (movimento_torre < 5) {          // uso de while e condição de movento da torre 5 vezes
        printf("direita\n");              // exibe o movimento 
        movimento_torre++;               // atualiza o movimento com incremento de mais um a cada execução
    }

    printf("\n");                  // pula uma linha 

    // Movimento do Bispo 
    printf("Movimento da peça Bispo:\n"); // exibi a mensagem da peça que vai de movimentar
    do {                                  // uso do do while
        printf("cima, direita\n");      // exibe o movimento   
        movimento_bispo++;              // atualiza o movimento com incremento de mais um a cada execução
    } while (movimento_bispo < 5);      // movimenta o Bispo 5 vezes

    printf("\n");                        // pula uma linha

    // Movimento da Rainha         
    printf("Movimento da peça Rainha:\n");             // exibi a mensagem da peça que vai de movimentar
    for (int movimento_rainha = 0; movimento_rainha < 8; movimento_rainha++) {  // uso de for para repetição
        printf("esquerda\n");               // exibe o movimento 
    }
    printf("\n");                          // pula uma linha

    // Movimentação do cavalo
    printf("Movimentação da peça Cavalo:\n"); // exibi a mensagem da peça que vai de movimentar
    int movimentoCompleto = 1;               
    while (movimentoCompleto--)
    {
        for ( int i = 0 ; i < 2; i++){   // uso de while e for aninhado para movimentar para baixo duas casas e uma vez esquerda
        printf("Baixo\n"); 
        }
        printf("Esquerda");
        }

    printf("\n"); // pula uma linha
    
    return 0;
}