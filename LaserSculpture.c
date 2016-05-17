/*
	Name: Ricardo Kim
	Copyright: Ricardo Kim
	Author: Ricardo Kim
	Date: 12/05/16 00:36
	Description:https://www.urionlinejudge.com.br/judge/pt/problems/view/1107

*/
#include<stdio.h>
 
int main()
{
	//freopen("in.txt","r",stdin);
	int altura,comprimento;
 
	scanf("%d",&altura);
	scanf("%d",&comprimento);
 
	while(comprimento!=0 && altura !=0)
	{
		int bloco[comprimento][altura]; //area do bloco inteiro
		int build[comprimento];			//area do bloco a ser preservada
		int x,y,laserON,aux,cont;		//variaveis de suporte
 	
		laserON = 0;
		aux = 0;
		cont = 0;
 
		/*coleta informacao de variavel*/
		for(x = 0 ;x<comprimento;x++)
			scanf("%d", &build[x]);
 
		laserON = laserON+cont;
 
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
 
		printf("%d\n",laserON);
 

 
		scanf("%d",&altura);
		scanf("%d",&comprimento);
 
	}
 
	return 0;
}
