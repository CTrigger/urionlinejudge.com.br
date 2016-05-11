/*
	Name: Ricardo Kim
	Copyright: Ricardo Kim
	Author: Ricardo Kim
	Date: 10/05/16 22:50
	Description: https://www.urionlinejudge.com.br/judge/pt/problems/view/2031
*/
#include<stdio.h>
#include<string.h>



#define J1 "Jogador 1 venceu\n"
#define J2 "Jogador 2 venceu\n"
char ataque[7]="ataque",pedra[7]="pedra",papel[7]="papel";

char *answer(const char *x, const char *y)
{
	
	/*
		Criterios de resultados
		
		ataque ataque 	=	Aniquilacao mutua
		papel papel 	=	Ambos venceram
		pedra pedra		=	Sem ganhador
	
		ataque > pedra > papel
	
	*/
	if (strcmp(x,y)==0)		//caso string iguais
	{
		if (strcmp(x,ataque)==0)
			return "Aniquilacao mutua\n";
		
		if (strcmp(x,pedra)==0)
			return "Sem ganhador\n";
		
		if (strcmp(x,papel)==0)
			return "Ambos venceram";
			
	}
	else					//caso string diferentes
	{
		if (strcmp(x,ataque)==0)
			return J1;
		
		if (strcmp(y,ataque)==0)
			return J2;
			
		if (strcmp(x,pedra)==0)
			if(strcmp(y,papel)==0)
				return J1;
		
		if	(strcmp(y,pedra)==0)
			if (strcmp(x,papel)==0)
				return J2;
		
	}
	
}
int main()
{
	int jogos;
	char jogador1[7],jogador2[7];
//#ifndef ONLINE_JUDGE
	//freopen( "in.txt", "r", stdin );
	//freopen( "out.txt","w", stdout);
//#endif
	
	scanf("%d",&jogos);
	
	int i;
	for (i = 0 ; i < jogos ; i++)
	{
		scanf("%s",jogador1);
		scanf("%s",jogador2);
		
		printf("%s",answer(jogador1,jogador2));
		//answer(jogador1,jogador2);
	}
	
	return 0;
}
