#include <stdio.h>

int main(){
	
	int minutos,horas,hMinutos;
	
	printf("Quantos minutos voce ja jogou jogador?: ");
	scanf("%d", &minutos);
	
	horas = minutos/60;
	hMinutos = minutos%60;
	
	printf("Voce ja jogou %d horas e %d minutos!", horas,hMinutos);
	
	return 0;
}
