#include<stdio.h>
#include<conio.h>
	int main(){
		float mas, alt, imc;
		printf("Insira seu peso\n");
		scanf("%f", &mas);
		printf("Insira sua altura\n ");
		scanf("%f", &alt);
		imc = (mas/(alt*alt));
		printf("Seu IMC � de %f \n", imc);
			if(imc<18.5)
				{
				printf("Vo�� esta abaixo do peso.\n");
				}
			if(imc<25.0)
				{
				printf("Voc� est� no peso ideal.\n");
				}	
			if(imc<30.0)
				{
				printf("Voc� acima no peso .\n");
				}
			if(imc<35.0)
				{
				printf("Voc� na Obesidade Grau I.\n");
				}
			if(imc<40.0)
				{
				printf("Voc� na Obesidade Grau II (Severa).\n");
				}			
			if(imc>=40.0)
				{
				printf("Voc� na Obesidade Grau III (Morbida).\n");
				}		
	}

