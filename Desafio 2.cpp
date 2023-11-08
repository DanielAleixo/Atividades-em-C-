#include <stdio.h>
int main(){
	double custoIngresso = 12.50;
	
	int escolha, quantidade;
	
	printf("*******Selecione o Filme:******\n");
	printf("1. Vingadores 4 - da Marvel\n");
	printf("2. Como treinar o seu dragao 3\n");
	printf("3. Dumbo\n");
	printf("4. Shazam!\n");
	
	printf("digite o numero do filme desejado: ");
	scanf("%d", &escolha);
	
	printf("Digite a quantidade de ingresssos desejada: ");
	scanf("%d", &quantidade);
	
	double valorTotal = custoIngresso * quantidade;
				
	printf("Quantidade de ingressos: %d\n", quantidade);
	printf("Valor total: R$ %.2f\n", valorTotal);
	return 0;
}
