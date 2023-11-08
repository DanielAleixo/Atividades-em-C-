#include <stdio.h>
int main(){
	int numero;
		
	printf("**Jogo dos numeros**\n");
	printf("digite um numero:");
	scanf("%d",&numero);
	
	int antecessor= numero - 1;
	int sucessor=numero + 1;
	
	printf("sucessor: %d\n", sucessor);
	printf("antecessor: %d\n", antecessor);
	printf("tabuada de multiplicacao: %d\n", numero);
	for (int i = 1; i <= 10; i++) {
		printf("%d x %d = %d\n", numero, i, numero * i);
	}
	printf("proximos tres numeros com contagem de dois em dois:\n");
	for (int i = 1; i <= 3; i++) {
		printf("%d\n", numero + i * 2);
	}
	
	return 0;
}