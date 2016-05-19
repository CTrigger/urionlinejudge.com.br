/*
	Name: Ricardo Kim
	Copyright: Ricardo Kim
	Author: Ricardo Kim
	Date: 18/05/16 21:34
	Description: https://www.urionlinejudge.com.br/judge/pt/problems/view/1087
*/
#include<stdio.h>
#include<stdlib.h>
int coordenadas(int x1, int y1, int x2, int y2)
{
	if(x1 == x2 && y1 == y2)
		return 0;
	
	if(x1 == x2 || y1 == y2 || abs(x2-x1) == abs(y2-y1) )
		return 1;
	
	return 2;
}
int main()
{
	//freopen("in.txt","r",stdin);
	
	int xi,yi,xf,yf;
	scanf("%d",&xi);
	scanf("%d",&yi);
	scanf("%d",&xf);
	scanf("%d",&yf);
	
	while (xi != 0 && yi != 0 && xf != 0 && yf != 0)
	{
		//printf("%d %d %d %d\n", xi,yi,xf,yf);
		printf("%d\n", coordenadas(xi,yi,xf,yf));
		
		
		
		
		scanf("%d",&xi);
		scanf("%d",&yi);
		scanf("%d",&xf);
		scanf("%d",&yf);
	}
	
	return 0;
}
