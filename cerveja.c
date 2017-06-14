#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define COTACAO 3.48
void clear(){
    #if defined(__linux__) || defined(__unix__) || defined(__APPLE__)
        system("clear");
    #endif

    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #endif
}
int main(int argc, char **argv)
{
	int curr,quant = 0;
	float med;
	while(1)
	{
		while(1)
		{
			printf("Insira a quantidade de barris a ser somada.\n");
			scanf("%d",&curr);
			if(curr == 0) break;
			else if(curr<0) printf("Quantidade invalida.\n Insira novamente.\n");		
			quant+=curr;
		}
		while(1)
		{
			printf("Insira valor medio do barril.\n");
			scanf("%f",&med);
			if(med<=0) printf("Valor invalido, re-insira.\n");
			else break;
		}
		float prod = (float) (quant*med)*COTACAO;
		printf("Producao do campo: %.3f\n",prod);
		printf("Deseja reiniciar o programa?\n");
		char str;
		fflush(stdin);
		scanf(" %c",&str);
		if(str == 'n')
		{
			printf("Programa encerreado.\n");
			break;
		}
		else clear();
	}
	return 0;
}

