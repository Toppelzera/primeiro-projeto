#include <stdio.h>

int main(){

	int gols, idade;
	char primeiroNome[20];
	
	printf("Escreva o seu nome jogador: ");
	scanf("%s", &primeiroNome);
	
	printf("Quantos gols fez na carreira?: ");
	scanf("%d", &gols);
	
	printf("Quantos anos voce tem?: ");
	scanf("%d", &idade);
	
	printf("MTO BEM JOGADOR!\n Seu nome e: %s \n Voce fez %d Gols na carreira \n E atualmente voce tem %d anos", primeiroNome, gols, idade);

	return 0;
}
