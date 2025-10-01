#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
// %c %c %c %c %c %c %c %c %c %c %c
// printf("%c\n", InfoTabuleiro[0]);

int main() {

// Inforrmações da Posição do Tabuleiro.
char InfoTabuleiro [11] = {' ', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};


// Tabuleiro.
int Tabuleiro[11][10] = {
// Essa linha abaixo não conta no Tabuleiro.
    {0,0,0,0,0,0,0,0,0,0},
// Essa linha acima não conta no Tabuleiro.

//////* A B C D E F G H I J */                         
/* 1 */ {0,0,0,0,0,0,0,0,0,0},
/* 2 */ {0,0,0,3,3,3,0,0,0,0},
/* 3 */ {0,0,0,0,0,0,0,0,0,0},
/* 4 */ {0,0,0,0,0,0,0,0,0,0},
/* 5 */ {0,0,0,0,0,0,0,0,0,0},
/* 6 */ {0,0,0,0,0,0,0,0,3,0},
/* 7 */ {0,0,0,0,0,0,0,0,3,0},
/* 8 */ {0,0,0,0,0,0,0,0,3,0},
/* 9 */ {0,0,0,0,0,0,0,0,0,0},
/* 10 */{0,0,0,0,0,0,0,0,0,0}
};



// Print do Espaço em Branco para Organização.
for (int k = 0; k < 1; k++) {
printf(" %c  ", InfoTabuleiro[k]);}



// Printar Indicadores X do A ao J.
for (int k = 1; k < 11; k++) {
printf("%c ", InfoTabuleiro[k]);}
printf("\n\n");



// Printar Tabuleiro com Indicadores Y do 0 ao 9.
for (int t = 1; t < 10; t++) {
printf(" %d  %d %d %d %d %d %d %d %d %d %d\n", t, 
Tabuleiro[t][0], 
Tabuleiro[t][1], 
Tabuleiro[t][2], 
Tabuleiro[t][3], 
Tabuleiro[t][4], 
Tabuleiro[t][5], 
Tabuleiro[t][6], 
Tabuleiro[t][7], 
Tabuleiro[t][8], 
Tabuleiro[t][9]);
}

// Printar Tabuleiro com Indicadores Y do 10 ao 99.
for (int t = 10; t < 11; t++) {
printf("%d  %d %d %d %d %d %d %d %d %d %d\n", t, 
Tabuleiro[t][0], 
Tabuleiro[t][1], 
Tabuleiro[t][2], 
Tabuleiro[t][3], 
Tabuleiro[t][4], 
Tabuleiro[t][5], 
Tabuleiro[t][6], 
Tabuleiro[t][7], 
Tabuleiro[t][8], 
Tabuleiro[t][9]);
}

    return 0;
}