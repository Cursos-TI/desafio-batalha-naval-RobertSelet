#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main() {

// Informações da Posição do Tabuleiro.
char InfoTabuleiro [11] = {' ', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};


// Tabuleiro.
int Tabuleiro[11][10] = {


// Essa linha abaixo não conta no Tabuleiro.
    {0,0,0,0,0,0,0,0,0,0},
// Essa linha acima não conta no Tabuleiro.

//////*  A B C D E F G H I J */                         
/* 1 */ {0,0,0,0,0,0,0,0,0,0},
/* 2 */ {0,0,0,3,3,3,0,0,0,0},
/* 3 */ {0,0,3,0,0,0,0,0,0,0},
/* 4 */ {0,0,0,3,0,0,0,0,0,0},
/* 5 */ {0,0,0,0,3,0,0,0,0,0},
/* 6 */ {0,0,0,0,0,0,0,0,3,0},
/* 7 */ {0,0,0,0,0,0,0,0,3,0},
/* 8 */ {0,0,0,3,0,0,0,0,3,0},
/* 9 */ {0,0,3,0,0,0,0,0,0,0},
/* 10 */{0,3,0,0,0,0,0,0,0,0}
};



// Habilidades
int cone = 1, cruz = 1, octaedro = 1;

/* Habilidade Cone

     0 0 3 0 0
     0 3 3 3 0
     3 3 3 3 3

*/// Código Cone
 if (cone == 1) {
 for (int t = 1; t < 6; t++) {
 Tabuleiro[7][t] = 5;}
      for (int t = 2; t < 5; t++) {
      Tabuleiro[6][t] = 5;}
           Tabuleiro[5][3] = 5;     
}



/* Habilidade Cruz

     0 0 3 0 0
     3 3 3 3 3
     0 0 3 0 0
     
*/// Código Cruz
if (cruz == 1) {
Tabuleiro[4][7] = 5;
     for (int t = 5; t < 10; t++) {
     Tabuleiro[5][t] = 5;}
           Tabuleiro[6][7] = 5;
}



/* Habilidade Octaedro

     0 0 3 0 0
     0 3 3 3 0
     0 0 3 0 0

*/// Código Octaedro
if (cruz == 1) {
Tabuleiro[1][1] = 5;
     for (int t = 0; t < 3; t++) {
     Tabuleiro[2][t] = 5;}
           Tabuleiro[3][1] = 5;
}


   
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