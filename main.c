#include <stdio.h>
#include <stdlib.h>

/* Função:  aplicação que recolhe os dados de um cliente, sendo estes, o saldo médio, o número de anos da conta e o código de tipo de conta,
            e que apresente  um resumo com os dados recolhidos e o valor total do prémio a que tem direito. 
   Autor:  Luís Filipe */
   
int main(int argc, char *argv[]) {
	
	//Variaveis
	int numeroAnosConta = 0, codigoConta = 0;
	float saldoMedio = 0, juros = 0, saldoMedioJuros = 0;
	
	//Limpa Consola
	system("cls");
	
	
	//Recolher o saldo medio
	printf("Insira o saldo medio da conta: ");
	scanf("%f", &saldoMedio);
	
	//Recolher o numero de anos da conta
	puts("");
	printf("Insira o numero de anos da conta: ");
	scanf("%d", &numeroAnosConta);
	
	//Recolher o codigo da conta
	puts("");
	printf("Insira o codigo da conta: ");
	scanf("%d", &codigoConta);

    
	
	
	//Informar sobre os premios referentes a cada tipo de conta
	puts("");
	printf("	Codigo |  Tipo de Conta      |  Premios em euros \n");
	printf("	  1    |  Empresarial Gold   |        150 \n");
	printf("	  2    |  Empresarial Silver |        100 \n");
	printf("	  3    |  Particular Gold    |        75 \n");
	printf("	  4    |  Partocular Silver  |        40 \n");
	printf("	  5    |       Outro         |         0 \n");	
	puts("");
	
	//Resumo dos dados recolhidos
	puts("");
	printf("O seu saldo inicial era de: %.2f euros\n", saldoMedio);
	printf("O numero de anos da sua conta e de: %d\n", numeroAnosConta);
	printf("O codigo da sua conta e: %d\n", codigoConta);

	
    //Verificação do codigo de conta 
	if (codigoConta == 1)
	{
		//Verificação das condiçoes para bonus de 1%
		if (saldoMedio >= 100000.000 && numeroAnosConta > 10)
			{
				printf("\nTem direito a um bonus de 1%% \n");
				juros = saldoMedio * 0.01 * numeroAnosConta / 365; //Calculo dos juros
				saldoMedioJuros = saldoMedio + juros; //ou saldoMedioJuros += juros;
				printf("O saldo medio passa agora a ser de: %.2f \n", saldoMedioJuros);
				printf("A sua conta e do tipo Empresarial Gold");
				printf("\nTem direito a um premio de 150 euros");
				saldoMedioJuros += 150; //ou saldoMedioJuros = saldoMedioJuros + 150;
				printf("\nO saldo medio com o premio passa agora a ser de: %.2f \n", saldoMedioJuros);
			}
		else
			{
				saldoMedio += 150; //ou saldoMedio = saldoMedio + juros;
				printf("\nA sua conta e do tipo Empresarial Gold");
				printf("\nTem direito a um premio de 150 euros");
				printf("\nO saldo medio passa agora a ser de: %.2f \n", saldoMedio);
			}
				
	}
	
	else if (codigoConta == 2)
	{
		//Verificação das condiçoes para bonus de 1%
		if (saldoMedio >= 100000.000 && numeroAnosConta > 10)
			{
				printf("\nTem direito a um bonus de 1%% \n");
				juros = saldoMedio * 0.01 * numeroAnosConta / 365; //Calculo dos juros
				saldoMedioJuros = saldoMedio + juros; //ou saldoMedioJuros += juros;
				printf("O saldo medio passa agora a ser de: %.2f \n", saldoMedioJuros);
				printf("A sua conta e do tipo Empresarial Silver");
				printf("\nTem direito a um premio de 100 euros");
				saldoMedioJuros += 100; //ou saldoMedioJuros = saldoMedioJuros + 100;
				printf("\nO saldo medio com o premio passa agora a ser de: %.2f \n", saldoMedioJuros);
			}
		else
			{
				saldoMedio += 100; //ou saldoMedio = saldoMedio + juros;
				printf("\nA sua conta e do tipo Empresarial Silver");
				printf("\nTem direito a um premio de 100 euros");
				printf("\nO saldo medio passa agora a ser de: %.2f \n", saldoMedio);
			}
	}
	
	else if (codigoConta == 3)
	{
		//Verificação das condiçoes para bonus de 1%
		if (saldoMedio >= 100000.000 && numeroAnosConta > 10)
			{
				printf("\nTem direito a um bonus de 1%% \n");
				juros = saldoMedio * 0.01 * numeroAnosConta / 365; //Calculo dos juros
				saldoMedioJuros = saldoMedio + juros; //ou saldoMedioJuros += juros;
				printf("O saldo medio passa agora a ser de: %.2f \n", saldoMedioJuros);
				printf("A sua conta e do tipo Empresarial Silver");
				printf("\nTem direito a um premio de 75 euros");
				saldoMedioJuros += 75; //ou saldoMedioJuros = saldoMedioJuros + 75;
				printf("\nO saldo medio com o premio passa agora a ser de: %.2f \n", saldoMedioJuros);
			}
		else
			{
				saldoMedio += 75; //ou saldoMedio = saldoMedio + juros;
				printf("\nA sua conta e do tipo Particular Gold");
				printf("\nTem direito a um premio de 75 euros");
				printf("\nO saldo medio passa agora a ser de: %.2f \n", saldoMedio);
			}
		
	}
	
	else if (codigoConta == 4)
	{
		//Verificação das condiçoes para bonus de 1%
		if (saldoMedio >= 100000.000 && numeroAnosConta > 10)
			{
				printf("\nTem direito a um bonus de 1%% \n");
				juros = saldoMedio * 0.01 * numeroAnosConta / 365; //Calculo dos juros
				saldoMedioJuros = saldoMedio + juros; //ou saldoMedioJuros += juros;
				printf("O saldo medio passa agora a ser de: %.2f \n", saldoMedioJuros);
				printf("A sua conta e do tipo Empresarial Silver");
				printf("\nTem direito a um premio de 40 euros");
				saldoMedioJuros += 40; //ou saldoMedioJuros = saldoMedioJuros + 40;
				printf("\nO saldo medio com o premio passa agora a ser de: %.2f \n", saldoMedioJuros);
			}
		else
			{
				saldoMedio += 40; //ou saldoMedio = saldoMedio + juros;
				printf("\nA sua conta e do tipo Particular Silver");
				printf("\nTem direito a um premio de 40 euros");
				printf("\nO saldo medio passa agora a ser de: %.2f \n", saldoMedio);
			}
	}
	
	else if (codigoConta == 5)
	{
		//Verificação das condiçoes para bonus de 1%
		if (saldoMedio >= 100000.000 && numeroAnosConta > 10)
			{
				printf("\nTem direito a um bonus de 1%% \n");
				juros = saldoMedio * 0.01 * numeroAnosConta / 365; //Calculo dos juros
				saldoMedioJuros = saldoMedio + juros; //ou saldoMedioJuros += juros;
				printf("O saldo medio passa agora a ser de: %.2f \n", saldoMedioJuros);
				printf("A sua conta e do tipo Outros");
				printf("\nNao tem direito a premio");
				printf("\nO saldo medio com o premio passa agora a ser de: %.2f \n", saldoMedioJuros);
			}
		else
			{
				printf("A sua conta e do tipo Outros");
				printf("\nNao teve direito a premio e o seu saldo medio continua de: %.2f \n ", saldoMedio);
			}
		
	}
	
	//Informa que o codigo inserido está incorreto
	else
	printf("Codigo Invalido");

	//pausa
	getchar();
	
}
	
