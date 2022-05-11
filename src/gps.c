/* 
 * Enunciado: 
 * Ver PDF!!!
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_STRING 100
#define MAX_ARRAY 4000
#define RAIO 6372795.477598

typedef struct {
  double lat, lon, alt;
  int tempo;
} Gps;

/* Funções de implementação obrigatória */
void troca_char(char *linha, char antigo, char novo);
void ler_ponto(char *linha, Gps *ponto);
double calcula_distancia(Gps pa, Gps pb);
double calcula_velocidade(Gps pa, Gps pb);
int ler_arquivo(char *nome_arq, Gps *pontos);
int escreve_dados(char *nome_arq, Gps *pontos, int tam);

/* Fuções para ajudar com testes */
void exibe_ponto(Gps ponto);
void exibe_pontos(Gps *pontos, int tam);

int main (int argc, char *argv[])
{
  char entrada[MAX_STRING] = "entrada.csv";
  char saida[MAX_STRING] = "saida.csv";

  return 0;
}

void troca_char(char *linha, char antigo, char novo) {
}

void ler_ponto(char *linha, Gps *ponto) {
}

double calcula_velocidade(Gps pa, Gps pb) {
}

double calcula_distancia(Gps pa, Gps pb) {
}

int ler_arquivo(char *nome_arq, Gps *pontos) {
}

int escreve_dados(char *nome_arq, Gps *pontos, int tam) {
}

void exibe_pontos(Gps *pontos, int tam) {
  for( int i = 0; i < tam; ++i )
    exibe_ponto(pontos[i]);
}

void exibe_ponto(Gps ponto) {
  printf("Coord: %f %s %f %s | Alt: %.1f m | Tempo: %i s\n",
      fabs(ponto.lat), ponto.lat<0?"Sul":"Norte",
      fabs(ponto.lon), ponto.lon<0?"Oeste":"Leste",
      ponto.alt, ponto.tempo);
}
