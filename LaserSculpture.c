/*
	Name: Ricardo Kim
	Copyright: Ricardo Kim
	Author: Ricardo Kim
	Date: 12/05/16 00:36
	Description: https://www.urionlinejudge.com.br/judge/pt/problems/view/1107
	
	Obs: será necessário ordenar em decrescente 
	((somar para cada altura igual menor que a altura) = +1)+(altura-menor nível)
*/
#include<stdio.h>
#include<stdlib.h>

int quickSort (const void * a, const void * b)
{
  if ( *(int*)a <  *(int*)b ) return -1;
  if ( *(int*)a == *(int*)b ) return 0;
  if ( *(int*)a >  *(int*)b ) return 1;
}

int main()
{
	freopen("in.txt","r",stdin);
	int altura,comprimento;
	
	scanf("%d",&altura);
	scanf("%d",&comprimento);
	
	while(comprimento!=0 && altura !=0)
	{
		int bloco[comprimento][altura]; //area do bloco inteiro
		int build[comprimento];			//area do bloco a ser preservada
		int x,y,laserON,aux,cont;			//variaveis de suporte

		laserON = 0;
		aux = 0;
		cont = 0;

		/*coleta informacao de variavel*/
		for(x = 0 ;x<comprimento;x++)
			scanf("%d", &build[x]);
		/*--------------------*/
		//qsort (build,comprimento,sizeof(int),quickSort);
		
		laserON = altura - build[0];
		
		//for(x=0;x<comprimento;x++)
			//printf("%d ",build[x]);
		//puts("");
		/*
		for(x = 1 , aux = build [0]; x < comprimento ; x++)
		{
			if(aux == build[x] && build[x]< altura)
				cont++;
			if(aux != build[x])
				aux = build[x];
			
		}*/
		//printf("cont=%d\nlaserON=%d\n",cont,laserON);
		//laserON = laserON+cont;
		
		/*desenha o bloco inteiro*/
		/*avalia condicao de laser ligado*/
		
		for(y= 0;y < altura;y++,aux=0)
			for(x = 0 ;x < comprimento;x++)
			{
				if(build[x] > y)
				{
					bloco[x][y]=0;
					aux =0 ;//
				}
				else
				{
					bloco[x][y]=1;
					if (aux == 0) //
						laserON++;//
					
					aux = 1;		//		
				}
			}
			
		/*conta o numero de vezes que o laser liga*/
		/*
		//===============================================
		//Este metodo causa TLE - por tanto nao presta
		for(y=0;y < altura;y++,aux=0)		
			for(x = 0 ;x < comprimento;x++)
			{
				if(aux == 0&&bloco[x][y] == 1)
				{
					aux = 1;
					laserON++;
				}
				if(aux==1 && bloco[x][y]==0)
				{
					aux = 0;
				}
			}
		//===============================================
		*/
		printf("%d\n",laserON);
		
		
		/*debug de saida*/
		///*
		//for(y=altura-1;y >= 0;puts(""),y--)		
		//	for(x = 0 ;x < comprimento;x++)
		//		printf("%d", bloco[x][y]);
		//*/
		//puts("");
		
		scanf("%d",&altura);
		scanf("%d",&comprimento);
		
	}
	
	return 0;
}
