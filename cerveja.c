#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define COTACAO 3.48
int main(int argc, char **argv)
{
	int curr,quant = 0;
	float med;
	while(1)
	{
		while(1)
		{
			scanf("%d",&curr);
			if(curr == 0) break;
			else if(curr<0) printf("Quantidade invalida.\n Insira novamente.\n");		
			quant+=curr;
		}
		while(1)
		{
			scanf("%f",&med);
			if(med<=0) printf("Valor invalido, re-insira.\n");
			else break;
		}
		float prod = (float) (quant*med)*COTACAO;
		printf("Producao do campo: %.3f\n",prod);
		printf("Deseja reiniciar o programa?\n(s\n)");
		char *str;
		scanf("%s",str);
		if(tolower(str[0]) == 'n')
		{
			printf("Programa encerreado.\n");
			break;
		}
	}
	return 0;
}

