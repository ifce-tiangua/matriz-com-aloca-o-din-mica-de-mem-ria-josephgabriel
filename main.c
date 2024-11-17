#include<stdio.h>
#include<stdlib.h>

//Bem-vindo ao Exercício "Vetor Dinâmico"

//Neste exercício, você vai escrever um programa que:

int main()
{
	int i;
	int valor;
	int t; //Leia o tamanho de um vetor

	printf("Digite  tamanho do vetor: ");
	scanf("%d", &t);

	int*p = (int*)malloc(t*sizeof(int)); //Aloque dinamicamente a memória para o vetor

    for(i=0; i<t; i++){
       printf("digite os dados do vetor %d: ", i);//Leia os dados de um vetor
       scanf("%d", &p[i]);
	}

    for(i=0; i<t; i++){
    	printf("[%d] = %d\n",i, p[i]); //Apresente os dados do vetor
	}

      free(p); //Desaloque a memória alocada anteriormente

}
