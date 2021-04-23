#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

#define qtMAX 15 //quantidade m�xima que o reservat�rio suporta

int main()
{
	setlocale(LC_ALL, "Portuguese"); //para poder usar palavras com acentua��o

	int c, qtM[1] = { 0 }, qtChuva[qtMAX] = { 0 }, qtGasto[qtMAX] = { 0 }, qtMes[qtMAX] = { 0 }; //vari�veis do tipo inteiro

	//para usu�rio definir a capacidade m�xima do reservat�rio:
	printf("Escolha a capacidade m�xima do reservat�rio de �gua (entre 1mm e 15mm): ");
	scanf_s("%d", &qtM[0]);
	while ((c = getchar()) != '\n' && c != EOF) {} //para limpar buffer de teclado

	//condicional que abrange os poss�veis valores inseridos:
	if ((qtM[0] >= 1) && (qtM[0] < 15))
	{
		printf("\nA capacidade m�xima escolhida �: %dmm\n", qtM[0]);
	}
	else
	{
		if (qtM[0] <= 0)
		{
			printf("\nO reservat�rio n�o possui capacidade de armazenamento.\n");
			printf("A capacidade m�nima � 1mm.\n");
			return 0;
		}
		else
		{
			if (qtM[0] == 15)
			{
				printf("\nO reservat�rio est� com a quantidade m�xima de �gua suportada: %dmm\n", qtM[0]);
			}
			else
			{
				printf("\nO limite de capacidade � 15mm.\n");
				return 0;
					
			}
		}
	}

	//para o usu�rio inserir qt de chuva e de gasto por m�s
	for (int x = 1; x <= 12; x++)
	{
		switch (x)
		{
		case 1: //Janeiro
			printf("\n-----------------------------------------------------------\n");
			printf("\nDigite quantos mil�metros de chuva teve em Janeiro: \n");
			scanf_s("%d", &qtChuva[0]);
			printf("Agora digite quantos mil�metros de �gua foram gastos em Janeiro: \n");
			scanf_s("%d", &qtGasto[0]);
			qtMes[0] = qtChuva[0] - qtGasto[0]; //c�lculo da qt total de �gua que sobrou no reservat�rio no m�s
			
			//la�o de repeti��o para imprimir na tela quanto sobrou de �gua no reservat�rio:
			if ((qtMes[0] >= 1) && (qtMes[0] < qtM[0]))
			{
				printf("\n*** A quantidade de �gua no reservat�rio em Janeiro � de: %dmm ***\n", qtMes[0]);
			}
			else 
			{
				if (qtMes[0] <= 0)
				{
					printf("\n*** O reservat�rio em Janeiro est� VAZIO. ***\n");
				}
				else
				{
					printf("\n*** O reservat�rio em Janeiro est� CHEIO. ***\n");
				}
			}
			break;
		case 2: //Fevereiro
			printf("\n-----------------------------------------------------------\n");
			printf("\nDigite quantos mil�metros de chuva teve em Fevereiro: \n");
			scanf_s("%d", &qtChuva[1]);
			printf("Agora digite quantos mil�metros de �gua foram gastos em Fevereiro: \n");
			scanf_s("%d", &qtGasto[1]);
			qtMes[1] = (qtMes[0] + qtChuva[1]) - qtGasto[1]; //qt total de �gua que sobrou no reservat�rio no m�s
			
			//la�o de repeti��o para imprimir na tela quanto sobrou de �gua no reservat�rio:
			if ((qtMes[1] >= 1) && (qtMes[1] < qtM[0]))
			{
				printf("\n*** A quantidade de �gua no reservat�rio em Fevereiro � de: %dmm ***\n", qtMes[1]);
			}
			else
			{
				if (qtMes[1] <= 0)
				{
					printf("\n*** O reservat�rio em Fevereiro est� VAZIO. ***\n");
				}
				else
				{
					printf("\n*** O reservat�rio em Fevereiro est� CHEIO. ***\n");
				}
			}
			break;
		case 3: //Mar�o
			printf("\n-----------------------------------------------------------\n");
			printf("\nDigite quantos mil�metros de chuva teve em Mar�o: \n");
			scanf_s("%d", &qtChuva[2]);
			printf("Agora digite quantos mil�metros de �gua foram gastos em Mar�o: \n");
			scanf_s("%d", &qtGasto[2]);
			qtMes[2] = (qtMes[1] + qtChuva[2]) - qtGasto[2]; //qt total de �gua que sobrou no reservat�rio no m�s
			
			//la�o de repeti��o para imprimir na tela quanto sobrou de �gua no reservat�rio:
			if ((qtMes[2] >= 1) && (qtMes[2] < qtM[0]))
			{
				printf("\n*** A quantidade de �gua no reservat�rio em Mar�o � de: %dmm ***\n", qtMes[2]);
			}
			else
			{
				if (qtMes[2] <= 0)
				{
					printf("\n*** O reservat�rio em Mar�o est� VAZIO. ***\n");
				}
				else
				{
					printf("\n*** O reservat�rio em Mar�o est� CHEIO. ***\n");
				}
			}
			break;
		case 4: //Abril
			printf("\n-----------------------------------------------------------\n");
			printf("\nDigite quantos mil�metros de chuva teve em Abril: \n");
			scanf_s("%d", &qtChuva[3]);
			printf("Agora digite quantos mil�metros de �gua foram gastos em Abril: \n");
			scanf_s("%d", &qtGasto[3]);
			qtMes[3] = (qtMes[2] + qtChuva[3]) - qtGasto[3]; //qt total de �gua que sobrou no reservat�rio no m�s

			//la�o de repeti��o para imprimir na tela quanto sobrou de �gua no reservat�rio:
			if ((qtMes[3] >= 1) && (qtMes[3] < qtM[0]))
			{
				printf("\n*** A quantidade de �gua no reservat�rio em Abril � de: %dmm ***\n", qtMes[3]);
			}
			else
			{
				if (qtMes[3] <= 0)
				{
					printf("\n*** O reservat�rio em Abril est� VAZIO. ***\n");
				}
				else
				{
					printf("\n*** O reservat�rio em Abril est� CHEIO. ***\n");
				}
			}
			break;
		case 5: //Maio
			printf("\n-----------------------------------------------------------\n");
			printf("\nDigite quantos mil�metros de chuva teve em Maio: \n");
			scanf_s("%d", &qtChuva[4]);
			printf("Agora digite quantos mil�metros de �gua foram gastos em Maio: \n");
			scanf_s("%d", &qtGasto[4]);
			qtMes[4] = (qtMes[3] + qtChuva[4]) - qtGasto[4]; //qt total de �gua que sobrou no reservat�rio no m�s

			//la�o de repeti��o para imprimir na tela quanto sobrou de �gua no reservat�rio:
			if ((qtMes[4] >= 1) && (qtMes[4] < qtM[0]))
			{
				printf("\n*** A quantidade de �gua no reservat�rio em Maio � de: %dmm ***\n", qtMes[4]);
			}
			else
			{
				if (qtMes[4] <= 0)
				{
					printf("\n*** O reservat�rio em Maio est� VAZIO. ***\n");
				}
				else
				{
					printf("\n*** O reservat�rio em Maio est� CHEIO. ***\n");
				}
			}
			break;
		case 6: //Junho
			printf("\n-----------------------------------------------------------\n");
			printf("\nDigite quantos mil�metros de chuva teve em Junho: \n");
			scanf_s("%d", &qtChuva[5]);
			printf("Agora digite quantos mil�metros de �gua foram gastos em Junho: \n");
			scanf_s("%d", &qtGasto[5]);
			qtMes[5] = (qtMes[4] + qtChuva[5]) - qtGasto[5]; //qt total de �gua que sobrou no reservat�rio no m�s

			//la�o de repeti��o para imprimir na tela quanto sobrou de �gua no reservat�rio:
			if ((qtMes[5] >= 1) && (qtMes[5] < qtM[0]))
			{
				printf("\n*** A quantidade de �gua no reservat�rio em Junho � de: %dmm ***\n", qtMes[5]);
			}
			else
			{
				if (qtMes[5] <= 0)
				{
					printf("\n*** O reservat�rio em Junho est� VAZIO. ***\n");
				}
				else
				{
					printf("\n*** O reservat�rio em Junho est� CHEIO. ***\n");
				}
			}
			break;
		case 7: //Julho
			printf("\n-----------------------------------------------------------\n");
			printf("\nDigite quantos mil�metros de chuva teve em Julho: \n");
			scanf_s("%d", &qtChuva[6]);
			printf("Agora digite quantos mil�metros de �gua foram gastos em Julho: \n");
			scanf_s("%d", &qtGasto[6]);
			qtMes[6] = (qtMes[5] + qtChuva[6]) - qtGasto[6]; //qt total de �gua que sobrou no reservat�rio no m�s

			//la�o de repeti��o para imprimir na tela quanto sobrou de �gua no reservat�rio:
			if ((qtMes[6] >= 1) && (qtMes[6] < qtM[0]))
			{
				printf("\n*** A quantidade de �gua no reservat�rio em Julho � de: %dmm ***\n", qtMes[6]);
			}
			else
			{
				if (qtMes[6] <= 0)
				{
					printf("\n*** O reservat�rio em Julho est� VAZIO. ***\n");
				}
				else
				{
					printf("\n*** O reservat�rio em Julho est� CHEIO. ***\n");
				}
			}
			break;
		case 8: //Agosto
			printf("\n-----------------------------------------------------------\n");
			printf("\nDigite quantos mil�metros de chuva teve em Agosto: \n");
			scanf_s("%d", &qtChuva[7]);
			printf("Agora digite quantos mil�metros de �gua foram gastos em Agosto: \n");
			scanf_s("%d", &qtGasto[7]);
			qtMes[7] = (qtMes[6] + qtChuva[7]) - qtGasto[7]; //qt total de �gua que sobrou no reservat�rio no m�s

			//la�o de repeti��o para imprimir na tela quanto sobrou de �gua no reservat�rio:
			if ((qtMes[7] >= 1) && (qtMes[7] < qtM[0]))
			{
				printf("\n*** A quantidade de �gua no reservat�rio em Agosto � de: %dmm ***\n", qtMes[7]);
			}
			else
			{
				if (qtMes[7] <= 0)
				{
					printf("\n*** O reservat�rio em Agosto est� VAZIO. ***\n");
				}
				else
				{
					printf("\n*** O reservat�rio em Agosto est� CHEIO. ***\n");
				}
			}
			break;
		case 9: //Setembro
			printf("\n-----------------------------------------------------------\n");
			printf("\nDigite quantos mil�metros de chuva teve em Setembro: \n");
			scanf_s("%d", &qtChuva[8]);
			printf("Agora digite quantos mil�metros de �gua foram gastos em Setembro: \n");
			scanf_s("%d", &qtGasto[8]);
			qtMes[8] = (qtMes[7] + qtChuva[8]) - qtGasto[8]; //qt total de �gua que sobrou no reservat�rio no m�s

			//la�o de repeti��o para imprimir na tela quanto sobrou de �gua no reservat�rio:
			if ((qtMes[8] >= 1) && (qtMes[8] < qtM[0]))
			{
				printf("\n*** A quantidade de �gua no reservat�rio em Setembro � de: %dmm ***\n", qtMes[8]);
			}
			else
			{
				if (qtMes[8] <= 0)
				{
					printf("\n*** O reservat�rio em Setembro est� VAZIO. ***\n");
				}
				else
				{
					printf("\n*** O reservat�rio em Setembro est� CHEIO. ***\n");
				}
			}
			break;
		case 10: //Outubro
			printf("\n-----------------------------------------------------------\n");
			printf("\nDigite quantos mil�metros de chuva teve em Outubro: \n");
			scanf_s("%d", &qtChuva[9]);
			printf("Agora digite quantos mil�metros de �gua foram gastos em Outubro: \n");
			scanf_s("%d", &qtGasto[9]);
			qtMes[9] = (qtMes[8] + qtChuva[9]) - qtGasto[9]; //qt total de �gua que sobrou no reservat�rio no m�s

			//la�o de repeti��o para imprimir na tela quanto sobrou de �gua no reservat�rio:
			if ((qtMes[9] >= 1) && (qtMes[9] < qtM[0]))
			{
				printf("\n*** A quantidade de �gua no reservat�rio em Outubro � de: %dmm ***\n", qtMes[9]);
			}
			else
			{
				if (qtMes[9] <= 0)
				{
					printf("\n*** O reservat�rio em Outubro est� VAZIO. ***\n");
				}
				else
				{
					printf("\n*** O reservat�rio em Outubro est� CHEIO. ***\n");
				}
			}
			break;
		case 11: //Novembro
			printf("\n-----------------------------------------------------------\n");
			printf("\nDigite quantos mil�metros de chuva teve em Novembro: \n");
			scanf_s("%d", &qtChuva[10]);
			printf("Agora digite quantos mil�metros de �gua foram gastos em Novembro: \n");
			scanf_s("%d", &qtGasto[10]);
			qtMes[10] = (qtMes[9] + qtChuva[10]) - qtGasto[10]; //qt total de �gua que sobrou no reservat�rio no m�s

			//la�o de repeti��o para imprimir na tela quanto sobrou de �gua no reservat�rio:
			if ((qtMes[10] >= 1) && (qtMes[10] < qtM[0]))
			{
				printf("\n*** A quantidade de �gua no reservat�rio em Novembro � de: %dmm ***\n", qtMes[10]);
			}
			else
			{
				if (qtMes[10] <= 0)
				{
					printf("\n*** O reservat�rio em Novembro est� VAZIO. ***\n");
				}
				else
				{
					printf("\n*** O reservat�rio em Novembro est� CHEIO. ***\n");
				}
			}
			break;
		case 12: //Dezembro
			printf("\n-----------------------------------------------------------\n");
			printf("\nDigite quantos mil�metros de chuva teve em Dezembro: \n");
			scanf_s("%d", &qtChuva[11]);
			printf("Agora digite quantos mil�metros de �gua foram gastos em Dezembro: \n");
			scanf_s("%d", &qtGasto[11]);
			qtMes[11] = (qtMes[10] + qtChuva[11]) - qtGasto[11]; //qt total de �gua que sobrou no reservat�rio no m�s

			//la�o de repeti��o para imprimir na tela quanto sobrou de �gua no reservat�rio:
			if ((qtMes[11] >= 1) && (qtMes[11] < qtM[0]))
			{
				printf("\n*** A quantidade de �gua no reservat�rio em Dezembro � de: %dmm ***\n\n\n", qtMes[11]);
			}
			else
			{
				if (qtMes[11] <= 0)
				{
					printf("\n*** O reservat�rio em Dezembro est� VAZIO. ***\n\n\n");
				}
				else
				{
					printf("\n*** O reservat�rio em Dezembro est� CHEIO. ***\n\n\n");
				}
			}
			break;
		default:
			printf("\nOP��O INV�LIDA\n");
			break;
		}
	}

	system("pause");
	return 0;
}