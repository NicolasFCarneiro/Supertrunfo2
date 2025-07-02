#include <stdio.h>
#include <string.h>

struct CartaSuperTrunfo {
	char estado;
	char codigo[4];
	char cidade[50];
	int populacao;
	float PIB;
	float Area;
	int PT;
	float DP;
	float PC;
};

void lerCarta(struct CartaSuperTrunfo* carta) {
	printf("\nDigite o estado (uma letra de A a H): ");
	scanf(" %c", &carta->estado);
	printf("Digite o c�digo da carta: ");
	scanf(" %s", carta->codigo);
	printf("Digite o nome da cidade: ");
	scanf(" %s", carta->cidade);
	printf("Digite a popula��o da cidade: ");
	scanf(" %d", &carta->populacao);
	printf("Digite o PIB da cidade:");
	scanf(" %f", &carta->PIB);
	printf("Digite a Area da cidade:");
	scanf(" %f", &carta->Area);
	printf("Digite os pontos turisticos da cidade:");
	scanf(" %d", &carta->PT);
}

int main() {
	struct CartaSuperTrunfo carta1, carta2;
    
	printf("Insira os dados da primeira carta:");
	lerCarta(&carta1);
	carta1.DP = carta1.populacao / carta1.Area;
	carta1.PC = carta1.PIB/carta1.populacao;

	printf("\nInsira os dados da segunda carta:");
	lerCarta(&carta2);
	carta2.DP = carta2.populacao / carta2.Area;
	carta2.PC = carta2.PIB/carta2.populacao;

	printf("\n\nDados da primeira carta:\n");
	printf("Estado: %c\nC�digo: %s\nCidade: %s\nPopula��o: %d\nPib: %f\nArea: %f\nPT: %d\nDP: %f\nPC: %f\n",
		carta1.estado, carta1.codigo, carta1.cidade, carta1.populacao, carta1.PIB, carta1.Area, carta1.PT,carta1.DP,carta1.PC);

	printf("\nDados da segunda carta:\n");
	printf("Estado: %c\nC�digo: %s\nCidade: %s\nPopula��o: %d\nPib: %f\nArea: %f\nPT: %d\nDP: %f\nPC: %f\n",
		carta2.estado, carta2.codigo, carta2.cidade, carta2.populacao, carta2.PIB, carta2.Area, carta2.PT,carta2.DP,carta2.PC);
	
	printf("\nA Cidade com maior area vence:");
	if(carta1.Area < carta2.Area)
	{
		printf("\n Carta 2 ganhou");
		printf("\n%f > %f",carta2.Area,carta1.Area);
	} else{
		printf("\n Carta 1 ganhou");
		printf("\n%f > %f",carta1.Area,carta2.Area);
	}

}