#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
		
		int alea(){
		int a;
		a=rand()%100;
		
		return a;
		}
			
	
		int main(){
			int a,b,c,d,e,f,g,h,i,j,l,res,cont=0;
			printf("Quest�o 1 - Qual � o resultado de %d + %d\n", a= alea(),b= alea());
			res = a+b;
			printf("\nDigite sua resposta\n");
			scanf("%d", &c);
			if(c ==res)
				{
				printf("\nVo�� acertou\n");
				cont++;}
				else
				printf("\nVo�� errou\n");
				
			printf("\nQuest�o 2 - Qual � o resultado de %d + %d\n", d= alea(),e= alea());
			res = d+e;
			printf("\nDigite sua resposta\n");
			scanf("%d", &c);
			if (c ==res)
				{
				printf("\nVo�� acertou\n");
				cont++;}
			else
				printf("\nVo�� errou\n");
		
			printf("\nQuest�o 3 - Qual � o resultado de %d + %d\n", f= alea(),g= alea());
			res = f+g;
			printf("\nDigite sua resposta\n");
			scanf("%d", &c);
			if (c ==res)
				{
				printf("\nVo�� acertou\n");
				cont++;}
			else
				printf("\nVo�� errou\n");	
		
			printf("\nQuest�o 4 - Qual � o resultado de %d + %d\n", h= alea(),i= alea());
			res = h+i;
			printf("\nDigite sua resposta\n");
			scanf("%d", &c);
			if (c ==res)
				{
				printf("\nVo�� acertou\n");
				cont++;}
			else
				printf("\nVo�� errou\n");
			
			printf("\nQuest�o 5 - Qual � o resultado de %d + %d\n", j= alea(), l= alea());
			res = j+l;
			printf("\nDigite sua resposta\n");
			scanf("%d", &c);
			if (c ==res)
				{
				printf("\nVo�� acertou\n");
				cont++;}
			else
				printf("\nVo�� errou\n");
				
			printf("Vo�� acertou %d", cont);	
	}
	
	
	
