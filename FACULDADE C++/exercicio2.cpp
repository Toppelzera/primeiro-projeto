#include <stdio.h>

int main(){
	
	int gols,partidas;
	float media;
	
	printf("Quantos gols ja fez na carreira jogador?: ");
	scanf("%d", &gols);
	
	printf("E quantas partidas ja jogou?: ");
	scanf("%d", &partidas);
	
	media = (float)gols/partidas;
	
	printf("Sua media de gols por partida e: %.2f",media);
	
	return 0;
}
