#include <stdio.h>

int main(){
	
	int numero;
	
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	printf("O numero que voce digitou e: %d \n", numero);
	
	int idade;
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	
	if (idade>=18){
		printf("Voce e maior de idade");
	} else {
		printf("Voce e menor de idade");
	}
	
	return 0;
}
