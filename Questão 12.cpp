#include<stdio.h>
#include<conio.h>
#include<math.h>	
	int main(){
		int op;
		float n1, n2, n3, num, res;
		printf("Op 1 - M�dia Geometrica \n");
		printf("Op 2 - M�dia Ponderada \n");
		printf("Op 3 - M�dia Harm�nica \n");
		printf("Op 4 - M�dia Aritm�tica \n");
		scanf("%d", &op);
		if(!(op == 1)||(op == 2)||(op == 3)||(op == 4))
				{
					printf("Op��o invalida invalida ");
				}					
		printf("Digite um numero \n");
		scanf("%f", &n1);
		printf("Digite um numero \n");
		scanf("%f", &n2);
		printf("Digite um numero \n");
		scanf("%f", &n3);

			if (op == 1)
				{
				printf("A m�dia geometrica dos numeros inseridos � :%f ", pow((n1*n2*n3),1.0/3.0) );		
				}
			if(op == 2)
				{
					printf(" A m�dia ponderada dos numeros inseridos � : %f ", ((n1+(n2*2)+(n3*3))/5));
				}
			if(op == 3)
				{
					printf("A m�dia harmonica dos numeros inseridos � : %f", ((1/n1)+(1/n2)+(1/n3)/3));		
				}					
			if(op == 4)
				{
					printf("A m�dia aritm�tica dos numeros inseridos � : %f", ((n1+n2+n3)/3));
				}
			if(!(op == 1)||(op == 2)||(op == 3)||(op == 4))
				{
					printf("Op��o invalida invalida ");
				}					
					
					
}				
	
